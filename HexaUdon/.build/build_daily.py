from pathlib import Path
import subprocess, sys
from concurrent.futures import ThreadPoolExecutor
root=Path(__file__).resolve().parents[1]
sources=[p for p in (root/'src').rglob('*.cpp') if p.name!='main.cpp']+[root/sys.argv[2]]
out=root/'.build/compact_obj'
headers=max(p.stat().st_mtime for p in (root/'include').rglob('*.hpp'))
def compile(p):
 obj=out/('_'.join(p.relative_to(root).parts)+'.o')
 if not obj.exists() or obj.stat().st_mtime<max(p.stat().st_mtime,headers):
  subprocess.run(['g++','-std=c++17','-O2','-I'+str(root/'include'),'-I'+str(root/'third_party'),'-c',str(p),'-o',str(obj)],check=True)
 return str(obj)
with ThreadPoolExecutor(max_workers=3) as pool: objects=list(pool.map(compile,sources))
subprocess.run(['g++',*objects,'-lwininet','-o',str(root/'.build'/sys.argv[1])],check=True)

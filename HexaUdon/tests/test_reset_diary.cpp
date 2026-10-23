#include "io/DiaryWriter.hpp"
#include <cassert>
#include <filesystem>
#include <fstream>
#include <iostream>
int main(){
 namespace fs=std::filesystem;
 const auto root=fs::path(".build/reset_diary_test");
 assert(!fs::exists(root)); fs::create_directories(root/"same-id");
 std::ofstream(root/"same-id/day_4.md") << "previous run";
 GameState s{}; s.day=0;s.startsAt=100;s.endsAt=200;
 assert(DiaryWriter::archiveResetDiary(root.string(),"same-id",s));
 assert(DiaryWriter::findLastWrittenDay(root.string(),"same-id",5)==4);
 s.startsAt=s.endsAt=0;s.finished=true;
 assert(DiaryWriter::archiveResetDiary(root.string(),"same-id",s));
 assert(fs::exists(root/"same-id/day_4.md"));s.finished=false;
 assert(!DiaryWriter::archiveResetDiary(root.string(),"../outside",s));
 assert(DiaryWriter::archiveResetDiary(root.string(),"same-id",s));
 assert(DiaryWriter::findLastWrittenDay(root.string(),"same-id",5)==-1);
 assert(fs::exists(root/"archive/same-id/run_1/day_4.md"));
 fs::create_directories(root/"same-id");std::ofstream(root/"same-id/day_0.md")<<"second run";
 assert(DiaryWriter::archiveResetDiary(root.string(),"same-id",s));
 assert(fs::exists(root/"archive/same-id/run_2/day_0.md"));
 for(auto p:{root/"archive/same-id/run_1/day_4.md",root/"archive/same-id/run_2/day_0.md"})fs::remove(p);
 for(auto p:{root/"archive/same-id/run_1",root/"archive/same-id/run_2",root/"archive/same-id",root/"archive",root})fs::remove(p);
 std::cout<<"[PASS] Reset archives prior runs, live/finished runs preserve history, invalid ID rejected\n";
}

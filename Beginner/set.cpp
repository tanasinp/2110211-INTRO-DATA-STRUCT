#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string> words;
    string token = "babababa";
    //if (words.end() == find(words.begin(),words.end(),token)) ขอดูข้อมูลทั้งหมด จะได้ช้า
    if (words.end() == words.find(token)){ //ถามว่ามีมั้ย จะได้เร็วมาก
        words.insert(token);
    }

    //////
    
}
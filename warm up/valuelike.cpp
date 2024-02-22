#include"base.h"

class ptr{
    public:
        ptr(const string &s = string()):ss(new string(s)), i(0){}
        ptr(const ptr &p):ss(new string(*p.ss)), i(p.i){}
        ptr& operator=(const ptr &);
        ~ptr(){}
    private:
        string *ss;
        int i;
};

ptr& ptr::operator=(const ptr &rhs){
    auto newone = new string(*rhs.ss);
    delete ss;
    ss = newone;
    i = rhs.i;
    return *this;
}

int main(){
    string test = "OAOA";
    ptr a("apple");
    ptr b = a;
    ptr c(test);
}
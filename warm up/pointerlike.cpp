#include"base.h"

class ptr{
    public:
        ptr(const string &s = string()):ss(new string(s)), i(0), use(new size_t(1)){}
        ptr(const ptr &p):ss(p.ss),i(p.i),use(p.use){++*use;};
        ptr& operator=(const ptr&);
        ~ptr();
    private:
        string *ss;
        int i;
        size_t *use;
};
ptr::~ptr(){
    if(--*use == 0){
        delete ss;
        delete use;
    }
}
ptr& ptr::operator=(const ptr &rhs){
    ++*rhs.use;
    if(--*use == 0){
        delete ss;
        delete use;
    }
    ss = rhs.ss;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

int main(){
    ptr n;
    ptr m("uh");
    ptr a = m;
}
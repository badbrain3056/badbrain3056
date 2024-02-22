#include"preprocess.h"

class cal{
    public:
        cal(){}
        ~cal(){cout<< "See you next time.\n";}
        explicit cal(double &d,int &i);
        const long get_exp() const {return exp;}
    private:
        double prob_in_pool;
        int cost_for_one_draw;
        long exp;
};

cal::cal(double &prob_cal, int &one_draw){
    exp = one_draw / prob_cal;
}

int main(){
    int exit;
    welcome;
    if(std::cin >> exit && exit == 0){
        return 0;
    }
    int cost = 0;
    each_draw;
    std::cin >> cost;
    while(cin >> exit && exit){
        double prob = 0;
        probability;
        cin >> prob;
        cal temp(prob,cost);
        expectation;
        cout << temp.get_exp() << endl;
    }
}
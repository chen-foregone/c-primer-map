#include<map>
#include<string>
#include<vector>
#include<stdexcept>
#include<memory>
using std::string;
class StrBolb
{
public:
    using size_type=std::vector<string>::size_type;
    StrBolb(std::initializer_list<string>  li):pos(std::make_shared<std::vector<string>>(li)){}
    StrBolb(std::vector<string>t):pos(std::make_shared<std::vector<string>>(t)){}
    void check(const size_type &num,const string &error)const
    {
        if(pos->size()<=0)
            throw std::out_of_range(error);
    }
    void push_back(const string t)
    {
        pos->push_back(t);
    }
    void pop_back()
    {
        check(0,"no string");
        pos->pop_back();
    }
    string& front()
    {
        check(0,"no string");
        return pos->front();
    }
    const string& front()const
    {
        check(0,"no string");
        return pos->front();
    }
    string &back()
    {
        check(0,"no string");
        return pos->back();
    }
    const string &back()const
    {
        check(0,"no string");
        return pos->back();
    }
    size_type size()
    {return pos->size();}
private:
    std::shared_ptr<std::vector<string>>pos;
};
int main()
{
    ;
}

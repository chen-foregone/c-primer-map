#include<memory>
#include<string>
#include<vector>
#include<stdexcept>
using std::string;
class StrBlobPtr;
class StrBlob
{

public:
	friend class StrBlobPtr;
	using size_type = std::vector<string>::size_type;
	StrBlob(std::initializer_list<string>  li) :pos(std::make_shared<std::vector<string>>(li)) {}
	StrBlob(std::vector<string>t) :pos(std::make_shared<std::vector<string>>(t)) {}
	void check(const size_type& num, const string& error)const
	{
		if (pos->size() <= 0)
			throw std::out_of_range(error);
	}
	void push_back(const string t)
	{
		pos->push_back(t);
	}
	void pop_back()
	{
		check(0, "no string");
		pos->pop_back();
	}
	string& front()
	{
		check(0, "no string");
		return pos->front();
	}
	const string& front()const
	{
		check(0, "no string");
		return pos->front();
	}
	string& back()
	{
		check(0, "no string");
		return pos->back();
	}
	const string& back()const
	{
		check(0, "no string");
		return pos->back();
	}
	size_type size()
	{
		return pos->size();
	}
	StrBlobPtr begin();
	StrBlobPtr end();
private:
	std::shared_ptr<std::vector<string>>pos;
};
class StrBlobPtr
{
public:
	StrBlobPtr(StrBlob& tar, size_t in = 0) :weakpos(tar.pos), at(in) {}
	StrBlobPtr() :at(0) {}
	std::shared_ptr<std::vector<string>> check(size_t num)
	{
		auto sign = this->weakpos.lock();
		if (!sign)
		{
			throw std::out_of_range("out_of_ranne");
		}
		if (num>= sign->size())
		{
			throw std::runtime_error("unbound StrBlobPtr");
			return sign;
		}
	}
	std::string& deref()
	{
		auto p = check(at);
		return ((*p)[at]);
	}
	void inc()
	{
		
		auto p = check(at);
		at++;
	}
private:
	std::weak_ptr<std::vector<string>> weakpos;
	size_t at;
};
StrBlobPtr StrBlob::begin()
{
	return(StrBlobPtr(*this));
}
StrBlobPtr StrBlob::end()
{
	return(StrBlobPtr(*this, this->pos->size()));
}
int main()
{
	;
}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#pragma warning(disable : 4996)
using namespace std;


/*이 룰은 나이가 다르면 나이순 나이가 같으면 이름순 정렬*/
//bool Rule(pair<int, string> p1, pair<int, string>p2) {
//
//	if (p1.first != p2.first) {                    //나이가 다르면 나이순 정렬을 위해 
//		return p1.first < p2.first ? true : false;
//	}
//	else {                                        //나이가 같으면 이름순으로 정렬
//		
//		int minLength = p1.second.length() > p2.second.length() ? p1.second.length() : p2.second.length();
//		for (int i = 0; i < minLength; i++) {
//			if (p1.second[i] != p2.second[i]) {
//				return p1.second[i] > p2.second[i] ? true : false;
//			}
//		}
//		if (minLength == p1.second.length()) return true;
//		else return false;
//
//	}
//}



typedef class Member {
private:
	int m_old;
	string m_name;

public:
	Member() {};
	Member(int old, string name) : m_old(old), m_name(name)
	{};
	void SetMember(int old, string name) {
		m_old = old;
		m_name = name;
	
	}
	int GetOld() const { return m_old; }
	string GetName() const  { return m_name; }

}member;



/*이 룰은 나이가 다르면 나이순 정렬 나이가 같으면 등록 수 정렬*/
bool Rule(const member &m1, const member &m2) {
	if (m1.GetOld() < m2.GetOld()) {
		return true;
	}
	else if(m1.GetOld() == m2.GetOld()){
		return false;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	int old;
	string name;

	cin >> n;
	
	vector<member> v(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &old);
		cin>>name;
		member M(old, name);
		v[i] = M;
	}
	stable_sort(v.begin(), v.end(), Rule);
	//sort(v.begin(), v.end(), Rule);

	for(int i = 0; i < n; i++) {
		printf("%d ", v[i].GetOld());
		cout << v[i].GetName()<<'\n';
	}
	return 0;
}
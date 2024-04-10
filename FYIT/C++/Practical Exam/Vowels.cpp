#include<iostream>
using namespace std;
class Vowel
{
	public:
	void V()
	{
		char ch;
		cout<<"Enter the Characters: "<<endl;
		cin>>ch;
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			cout<<"Characters is Vowels!"<<endl;
		}
		else
		{
			cout<<"Character is Constonant!"<<endl;
		}
	}	
	
};
int main()
{
	Vowel obj;
	obj.V();
	return 0;
}

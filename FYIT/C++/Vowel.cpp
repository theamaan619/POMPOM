#include<iostream>
#include<string>
using namespace std;
class Vowel
{
	public:
	void vowel()
	{
		char name;
		cout<<"Enter The Word To find Vowel:- ";
		cin>>name;
		if(name=='A'||name=='E'||name=='I'||name=='O'||name=='U')
		{
			cout<<"the word has vowels";
		}
		else if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
		{
			cout<<"the word has vowels";
		}
		else
		{
			cout<<"The word is Consonant";
		}
	}
};
int main()
{
	Vowel d;
	d.vowel();
	return 0;
}
		
	

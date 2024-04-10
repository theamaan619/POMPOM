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
		try
		{
		
		if(name=='A'||name=='E'||name=='I'||name=='O'||name=='U'|| name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
		{
			cout<<"the word has vowels";
	
		}
		else
		{
			throw name;
		}
	}
	   catch(char x)
		{
			cout<<"The word is Consonant"<<x;
		}
	}
};
int main()
{
	Vowel d;
	d.vowel();
	return 0;
}
		
	

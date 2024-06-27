#include <iostream>
using namespace std;

struct student 
{
	string name;
	int score;

}s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;
	

struct teacher
{
	string name;
	struct student sArray[5];
};

void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";

	for (int i = 0; i < len; i++) 
	{

		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];

		for (int j = 0; j < 5; j++
		{
			tArray[i].sArray[j].
		})
	}
	

}

int main() {

	struct Teacher tArray[3]{};

	int len = sizeof(tArray)/sizeof(tArray[0]);

	allocateSpace(tArray, len);

	return 0;
}
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

const int Tone[8] = { 523, 587, 659,698,784,880,988,1046 };
const string Name[8] = { "도 ", "레", "미", "파", "솔", "라", "시", "도" };
int main()
{
	int SelectTone = 0;
	int Select = 0;
	char strTone[3];
	cout << "절대 음감 게임" << endl;
	cout << "설명: 처음에 8음계를 들려주고, " << endl;
	cout << "	다음에 8개 중 한개의 음을 들려준다 " << endl;
	cout << "	그리고 그 음을 번호로 맞힌다." << endl;
	cout << "준비하고 아무키나 누른다" << endl;

	_getch();

	while (true)
	{
		srand((unsigned)time(NULL));

		cout << "도(1) ";
		Beep(*(Tone + 0), 1000);
		cout << "레(2) ";
		Beep(*(Tone + 1), 1000);
		cout << "미(3) ";
		Beep(*(Tone + 2), 1000);
		cout << "파(4) ";
		Beep(*(Tone + 3), 1000);
		cout << "솔(5) ";
		Beep(*(Tone + 4), 1000);
		cout << "라(6) ";
		Beep(*(Tone + 5), 1000);
		cout << "시(7) ";
		Beep(*(Tone + 6), 1000);
		cout << "도(8) " << endl;
		Beep(*(Tone + 7), 1000);

		cout << "!!!준비!!!" << endl;
		Sleep(1000);
		SelectTone = rand() % 8;

		Beep(*(Tone + SelectTone), 1000);
		Select = _getch() - 0x30 - 1;
		if (SelectTone == Select)
		{
			cout << "잘하셨습니다" << endl;
			cout << "게임을 그만둘까요?(Y/N)" << endl;
			if (tolower(_getch()) == 'y')
			{
				break;
			}
		}
		else
		{
			cout << "틀리셨습니다" << endl;
			switch (SelectTone)
			{
			case 0:
				strcpy_s(strTone, "도");
				break;
			case 1:
				strcpy_s(strTone, "레");
				break;
			case 2:
				strcpy_s(strTone, "미");
				break;
			case 3:
				strcpy_s(strTone, "파");
				break;
			case 4:
				strcpy_s(strTone, "솔");
				break;
			case 5:
				strcpy_s(strTone, "라");
				break;
			case 6:
				strcpy_s(strTone, "시");
				break;
			case 7:
				strcpy_s(strTone, "도");
			}
			cout << "정답은 (" << strTone << " )입니다" << endl;
		}
	}

	return 0;
}
char LittleStar[42] = {
	'c','c','G','G','A','A','G',
	'F','F','E','E','D','D','c',
	'G','G','F','F','E','E','D',
	'c','c','G','G','A','A','G',
	'F','F','E','E','D','D','c',
};

int main(int argc, char* argv[])
{
	cout << "Play music !";
	_getch();
	char Tone = 0;


	for (int i = 0; i < 42; i++)
	{
		Tone = LittleStar[i];

		switch (Tone)
		{
		case 'c':
			Beep(523.25, 500);
			break;
		case 'D':
			Beep(587.33, 500);
			break;
		case 'E':
			Beep(659.26, 500);
			break;
		case 'F':
			Beep(698.46, 500);
			break;
		case 'G':
			Beep(783.99, 500);
			break;
		case 'A':
			Beep(880, 500);
			break;
		case 'B':
			Beep(987.77, 500);
			break;
		case 'C':
			Beep(1046.50, 500);
			break;
		}
	}

	return 0;
}
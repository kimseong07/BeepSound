#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

const int Tone[8] = { 523, 587, 659,698,784,880,988,1046 };
const string Name[8] = { "�� ", "��", "��", "��", "��", "��", "��", "��" };
int main()
{
	int SelectTone = 0;
	int Select = 0;
	char strTone[3];
	cout << "���� ���� ����" << endl;
	cout << "����: ó���� 8���踦 ����ְ�, " << endl;
	cout << "	������ 8�� �� �Ѱ��� ���� ����ش� " << endl;
	cout << "	�׸��� �� ���� ��ȣ�� ������." << endl;
	cout << "�غ��ϰ� �ƹ�Ű�� ������" << endl;

	_getch();

	while (true)
	{
		srand((unsigned)time(NULL));

		cout << "��(1) ";
		Beep(*(Tone + 0), 1000);
		cout << "��(2) ";
		Beep(*(Tone + 1), 1000);
		cout << "��(3) ";
		Beep(*(Tone + 2), 1000);
		cout << "��(4) ";
		Beep(*(Tone + 3), 1000);
		cout << "��(5) ";
		Beep(*(Tone + 4), 1000);
		cout << "��(6) ";
		Beep(*(Tone + 5), 1000);
		cout << "��(7) ";
		Beep(*(Tone + 6), 1000);
		cout << "��(8) " << endl;
		Beep(*(Tone + 7), 1000);

		cout << "!!!�غ�!!!" << endl;
		Sleep(1000);
		SelectTone = rand() % 8;

		Beep(*(Tone + SelectTone), 1000);
		Select = _getch() - 0x30 - 1;
		if (SelectTone == Select)
		{
			cout << "���ϼ̽��ϴ�" << endl;
			cout << "������ �׸��ѱ��?(Y/N)" << endl;
			if (tolower(_getch()) == 'y')
			{
				break;
			}
		}
		else
		{
			cout << "Ʋ���̽��ϴ�" << endl;
			switch (SelectTone)
			{
			case 0:
				strcpy_s(strTone, "��");
				break;
			case 1:
				strcpy_s(strTone, "��");
				break;
			case 2:
				strcpy_s(strTone, "��");
				break;
			case 3:
				strcpy_s(strTone, "��");
				break;
			case 4:
				strcpy_s(strTone, "��");
				break;
			case 5:
				strcpy_s(strTone, "��");
				break;
			case 6:
				strcpy_s(strTone, "��");
				break;
			case 7:
				strcpy_s(strTone, "��");
			}
			cout << "������ (" << strTone << " )�Դϴ�" << endl;
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
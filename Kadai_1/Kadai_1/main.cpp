#include <stdio.h>
#include <stdlib.h>   // �t�@�C���ǂݍ��݁A�������݂̋@�\������B

#pragma region Kadai1
//��P��
//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��public�ō쐬���A�O���Œl��ݒ肵�āA
//�l���\������邱�Ƃ��m�F���Ă��������B
/*struct Vectro1
{
public:
	int PosX; //PosX
	int PosY; //PosY
private:
};*/
/*int main()
{
	FILE* Pos_X;  //�t�@�C���̌`���Ăяo��
	FILE* Pos_Y;  //�t�@�C���̌`���Ăяo��
	Vectro1 vectro;	



	fopen_s(&Pos_X, "PosX.txt", "r");
	fopen_s(&Pos_Y, "PosY.txt", "r");

	while (1)
	{
		vectro.PosX = fgetc(Pos_X); // fgetc()�͂ЂƂÂf�[�^���擾���鏈���B
		if (!feof(Pos_X))
		{
			printf("PosX:");
			printf("%c\n", vectro.PosX);  // ��������\n�����Ȃ�
		}
		else
		{
			break;
		}
	}
	fclose(Pos_X);
	while (1)
	{
		vectro.PosY = fgetc(Pos_Y); // fgetc()�͂ЂƂÂf�[�^���擾���鏈���B
		if (!feof(Pos_Y))
		{
			printf("PosY:");
			printf("%c\n", vectro.PosY);  // ��������\n�����Ȃ�
		}
		else
		{
			break;
		}
	}
	fclose(Pos_Y);
	return 0;
}*/
#pragma endregion Kadai1
#pragma region Kadai2
//��Q��
//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B
/*?struct Vectro2
{
public:
	void setPos_X(int Pos_X) { PosX = Pos_X; }
	void setPos_Y(int Pos_Y) { PosY = Pos_Y; }
	int getPos_X(){ return PosX; };
	int getPos_Y(){ return PosY; };
private:
	int PosX;
	int PosY;
};*/
/*int main()
{
	
	FILE* Pos_X;
	FILE* Pos_Y;
	Vectro2 vectro;



	fopen_s(&Pos_X, "PosX.txt", "r");
	fopen_s(&Pos_Y, "PosY.txt", "r");

	while (1)
	{
		vectro.setPos_X(fgetc(Pos_X)); // fgetc()�͂ЂƂÂf�[�^���擾���鏈���B
		if (!feof(Pos_X))
		{
			printf("PosX:");
			printf("%c\n", vectro.getPos_X());  // ��������\n�����Ȃ�
		}
		else
		{
			break;
		}
	}
	fclose(Pos_X);
	while (1)
	{
		vectro.setPos_Y (fgetc(Pos_Y)); // fgetc()�͂ЂƂÂf�[�^���擾���鏈���B
		if (!feof(Pos_Y))
		{
			printf("PosY:");
			printf("%c\n", vectro.getPos_Y());  // ��������\n�����Ȃ�
		}
		else
		{
			break;
		}
	}
	fclose(Pos_Y);
	return 0;
}*/
#pragma endregion Kadai2
#pragma region Kadai3
//��R��
//x, y, z���W�����\����Vector3��
//����Ă��������B
//x, y, z��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B
struct Vectro3
{
public:
	void setPos_X(int Pos_X) { PosX = Pos_X; }
	void setPos_Y(int Pos_Y) { PosY = Pos_Y; }
	void setPos_Z(int Pos_Z) { PosZ = Pos_Z; }
	int getPos_X(){ return PosX; };
	int getPos_Y(){ return PosY; };
	int getPos_Z(){ return PosZ; };
private:
	int PosX;
	int PosY;
	int PosZ;
};
int main()
{

	FILE* Pos_X;
	FILE* Pos_Y;
	FILE* Pos_Z;
	Vectro3 vectro;



	fopen_s(&Pos_X, "PosX.txt", "r");
	fopen_s(&Pos_Y, "PosY.txt", "r");
	fopen_s(&Pos_Z, "PosZ.txt", "r");

	while (1)
	{
		vectro.setPos_X(fgetc(Pos_X)); 
		if (!feof(Pos_X))
		{
			printf("PosX:");
			printf("%c\n", vectro.getPos_X());  
		}
		else
		{
			break;
		}
	}
	fclose(Pos_X);
	while (1)
	{
		vectro.setPos_Y (fgetc(Pos_Y)); 
		if (!feof(Pos_Y))
		{
			printf("PosY:");
			printf("%c\n", vectro.getPos_Y());  
		}
		else
		{
			break;
		}
	}
	fclose(Pos_Y);
	while (1)
	{
		vectro.setPos_Z(fgetc(Pos_Z)); 
		if (!feof(Pos_Z))
		{
			printf("PosZ:");
			printf("%c\n", vectro.getPos_Z());  
		}
		else
		{
			break;
		}
	}
	fclose(Pos_Z);
	return 0;
}
#pragma endregion Kadai3
#include <stdio.h>
#include <stdlib.h>   // ファイル読み込み、書き込みの機能がある。

#pragma region Kadai1
//第１問
//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはpublicで作成し、外部で値を設定して、
//値が表示されることを確認してください。
/*struct Vectro1
{
public:
	int PosX; //PosX
	int PosY; //PosY
private:
};*/
/*int main()
{
	FILE* Pos_X;  //ファイルの形を呼び出し
	FILE* Pos_Y;  //ファイルの形を呼び出し
	Vectro1 vectro;	



	fopen_s(&Pos_X, "PosX.txt", "r");
	fopen_s(&Pos_Y, "PosY.txt", "r");

	while (1)
	{
		vectro.PosX = fgetc(Pos_X); // fgetc()はひとつづつデータを取得する処理。
		if (!feof(Pos_X))
		{
			printf("PosX:");
			printf("%c\n", vectro.PosX);  // いったん\nをつけない
		}
		else
		{
			break;
		}
	}
	fclose(Pos_X);
	while (1)
	{
		vectro.PosY = fgetc(Pos_Y); // fgetc()はひとつづつデータを取得する処理。
		if (!feof(Pos_Y))
		{
			printf("PosY:");
			printf("%c\n", vectro.PosY);  // いったん\nをつけない
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
//第２問
//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。
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
		vectro.setPos_X(fgetc(Pos_X)); // fgetc()はひとつづつデータを取得する処理。
		if (!feof(Pos_X))
		{
			printf("PosX:");
			printf("%c\n", vectro.getPos_X());  // いったん\nをつけない
		}
		else
		{
			break;
		}
	}
	fclose(Pos_X);
	while (1)
	{
		vectro.setPos_Y (fgetc(Pos_Y)); // fgetc()はひとつづつデータを取得する処理。
		if (!feof(Pos_Y))
		{
			printf("PosY:");
			printf("%c\n", vectro.getPos_Y());  // いったん\nをつけない
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
//第３問
//x, y, z座標を持つ構造体Vector3を
//作ってください。
//x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。
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
//使用ヘッダーファイル
#include "GameL/DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameHead.h"
#include "GameL\Audio.h"

#include"Obj2048Main.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObj2048Main::CObj2048Main()
{
	
}

//イニシャライズ
void CObj2048Main::Init()
{
	
}

//アクション
void CObj2048Main::Action()
{
	//マウスの座標を読み込む
	x = (float)Input::GetPosX();
	y = (float)Input::GetPosY();

	//クリック判別
	//[0]のみ true = 押している状態　
	//[1]のみ true = 押していない状態
	//両方    true = 押してから離した状態
	if (Input::GetMouButtonL() == true)
	{
		c_flag[0] = true;
		c_flag[1] = false;
	}
	if (Input::GetMouButtonL() == false)
	{
		c_flag[1] = true;
	}
	
	//当たり判定----------------------------------------------
	//上ボタン
	if ((y > 400.0f && y < 468.0f) && (x > 661.0f && x < 729.0f))
	{
		if (c_flag[0]==true && c_flag[1]==true)
		{
			upflag = true;
		}
		else
		{
			upflag == false;
		}
	}
	//下ボタン
	if ((y > 534.0f && y < 602.0f) && (x > 661.0f && x < 729.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			downflag = true;
		}
		else
		{
			downflag == false;
		}
	}
	//左ボタン
	if ((y > 467.0f && y < 535.0f) && (x > 593.0f && x < 661.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			leftflag = true;
		}
		else
		{
			leftflag == false;
		}
	}
	//右ボタン
	if ((y > 467.0f && y < 535.0f) && (x > 729.0f && x < 797.0f))
	{
		if (c_flag[0] == true && c_flag[1] == true)
		{
			rightflag = true;
		}
		else
		{
			rightflag == false;
		}
	}





}

//ドロー
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;	//描画元切り取り位置の設定
	RECT_F dst; //描画先表示位置

	Font::StrDraw(L"テストわよ", 700, 300, 16, c);
	//パネル__________________________________________
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 384.0f;
	src.m_bottom = 384.0f;
	dst.m_top = 108.0f;
	dst.m_left = 208.0f;
	dst.m_right = 592.0f;
	dst.m_bottom = 492.0f;
	
	Draw::Draw(0, &src, &dst, c, 0.0f);
	//ボタン__________________________________________
	//上
	src.m_top = 372.0f;
	src.m_left = 0.0f;
	src.m_right = 68.0f;
	src.m_bottom = 440.0f;
	dst.m_top = 400.0f;
	dst.m_left = 661.0f;
	dst.m_right = 729.0f;
	dst.m_bottom = 468.0f;
	Draw::Draw(1, &src, &dst, c, 0.0f);

	//下
	dst.m_top = 534.0f;
	dst.m_left = 661.0f;
	dst.m_right = 729.0f;
	dst.m_bottom = 602.0f;
	Draw::Draw(1, &src, &dst, c, 180.0f);

	//左
	dst.m_top = 467.0f;
	dst.m_left = 593.0f;
	dst.m_right = 661.0f;
	dst.m_bottom = 535.0f;
	Draw::Draw(1, &src, &dst, c, 90.0f);
	//右
	dst.m_top = 467.0f;
	dst.m_left = 729.0f;
	dst.m_right = 797.0f;
	dst.m_bottom = 535.0f;
	Draw::Draw(1, &src, &dst, c, 270.0f);


	if (upflag == true)
	{
		Font::StrDraw(L"上押せてる", 700, 200, 16, c);
	}
	if (downflag == true)
	{
		Font::StrDraw(L"下押せてる", 700, 250, 16, c);
	}
	if (leftflag == true)
	{
		Font::StrDraw(L"左押せてる", 700, 300, 16, c);
	}
	if (rightflag == true)
	{
		Font::StrDraw(L"右押せてる", 700, 350, 16, c);
	}

}
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
	

}

//ドロー
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;	//描画元切り取り位置の設定
	RECT_F dst; //描画先表示位置

	Font::StrDraw(L"テストわよ", 700, 300, 16, c);
	//ぼたん__________________________________________
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 384.0f;
	src.m_bottom = 384.0f;
	dst.m_top = 108.0f;
	dst.m_left = 208.0f;
	dst.m_right = 592.0f;
	dst.m_bottom = 492.0f;
	
	Draw::Draw(0, &src, &dst, c, 0.0f);
}
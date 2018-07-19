//----------------------------------------------------------------------------
// PreferencesWnd.h : 詳細設定ウィンドウの管理を行う
//----------------------------------------------------------------------------
#ifndef PreferencesWndH
#define PreferencesWndH

#include <QDialog>
#include "ui_PreferencesWnd.h"
//----------------------------------------------------------------------------
// 詳細設定ウィンドウの管理を行うクラス
//----------------------------------------------------------------------------
class CPreferencesWnd : public QDialog, public Ui::PreferencesWnd
{
	Q_OBJECT

public: // 関数

	CPreferencesWnd();

	void Apply();
	int exec();

private:

	void BrowseLAME();
};
//----------------------------------------------------------------------------

#endif

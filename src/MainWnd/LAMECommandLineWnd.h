//----------------------------------------------------------------------------
// LAMECommandLineWnd.h : LAMEコマンドライン設定用ウィンドウの管理を行う
//----------------------------------------------------------------------------
#ifndef LAMECommandLineWndH
#define LAMECommandLineWndH

class CMainWnd;
#include <QDialog.h>
#include "ui_LAMECommandLineWnd.h"
//----------------------------------------------------------------------------
// LAMEコマンドライン設定用ウィンドウの管理を行うクラス
//----------------------------------------------------------------------------
class CLAMECommandLineWnd : public QDialog, public Ui::LAMECommandLineWnd
{
public: // 関数

	explicit CLAMECommandLineWnd(CMainWnd & mainWnd);
	virtual ~CLAMECommandLineWnd() { }

	virtual void SetCommandLine();

private: // メンバ変数

	CMainWnd & m_rMainWnd;
};
//----------------------------------------------------------------------------

#endif

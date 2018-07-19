//----------------------------------------------------------------------------
// LAMECommandLineWnd.cpp : LAMEコマンドライン設定用ウィンドウの管理を行う
//----------------------------------------------------------------------------
#include "MainWnd.h"
#include "LAMECommandLineWnd.h"
#include "Utility.h"
//----------------------------------------------------------------------------
// コンストラクタ
//----------------------------------------------------------------------------
CLAMECommandLineWnd::CLAMECommandLineWnd(CMainWnd & mainWnd)
	: m_rMainWnd(mainWnd)
{
	Ui::LAMECommandLineWnd::setupUi(this);
	setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

	tstring strCommandLine = m_rMainWnd.GetStrLAMECommandLine();
	m_edit->setText(ToQString(strCommandLine));
	m_edit->selectAll();

	connect(this->buttonBox, &QDialogButtonBox::accepted,
					[&] { SetCommandLine(); });
}
//----------------------------------------------------------------------------
// 秒数の設定
//----------------------------------------------------------------------------
void CLAMECommandLineWnd::SetCommandLine()
{
	tstring strCommandLine = ToTstring(m_edit->text());
	m_rMainWnd.SetLAMECommandLine(strCommandLine);
	accepted();
}
//----------------------------------------------------------------------------

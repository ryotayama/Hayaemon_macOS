//----------------------------------------------------------------------------
// PreferencesWnd.cpp : 詳細設定ウィンドウの管理を行う
//----------------------------------------------------------------------------
#include "PreferencesWnd.h"
//----------------------------------------------------------------------------
// コンストラクタ
//----------------------------------------------------------------------------
CPreferencesWnd::CPreferencesWnd()
{
	Ui::PreferencesWnd::setupUi(this);
	setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

#if __APPLE__
	attach_menubar_checkbox_->setVisible(true);
	note_label_->setVisible(true);
#else
	attach_menubar_checkbox_->setVisible(false);
	note_label_->setVisible(false);
#endif

	connect(this->buttonBox, &QDialogButtonBox::accepted,
					this, &CPreferencesWnd::Apply);
}
//----------------------------------------------------------------------------
// 設定を適用
//----------------------------------------------------------------------------
void CPreferencesWnd::Apply()
{
	accepted();
}
//----------------------------------------------------------------------------
// モーダルダイアログを表示
//----------------------------------------------------------------------------
int CPreferencesWnd::exec()
{
	control_spacing_spinbox_->setEnabled(control_spacing_checkbox_->isChecked());
	return QDialog::exec();
}
//----------------------------------------------------------------------------

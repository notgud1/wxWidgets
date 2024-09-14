#include "App.h"
#include "mainframe.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	mainframe* MainFrame = new mainframe("C++ windowed");
	MainFrame->SetClientSize(800, 600);
	MainFrame->Center();
	MainFrame->Show();
	return true;
}

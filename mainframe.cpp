#include "mainframe.h"
#include <wx/wx.h>
#include <wx/spinctrl.h> // this is needed for the spinctrl box
#include <wx/calctrl.h> // used for calendar

mainframe::mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

    wxPanel* panel = new wxPanel(this, wxID_ANY);
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    wxButton* button = new wxButton(panel, wxID_ANY, "Button",wxPoint(150,50),wxSize(100,35));

    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "checkBox",wxPoint(550,55));

    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "statictext - uneditable",wxPoint(120,150));

    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "textctrl- editable", wxPoint(500, 145), wxSize(200, -1));

    wxSlider* slider = new wxSlider(panel, wxID_ANY, 250, 0, 100, wxPoint(100, 250), wxSize(200, -1));

    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 225), wxSize(200, -1));
    //gauge->SetValue(50);
    for (int i = 0; i < 100; i+=1)
    {
        gauge->SetValue(i);
    }

    wxArrayString choices;
    choices.Add("a");
    choices.Add("b");
    choices.Add("c");
    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices);
    choice->Select(0);  // this makes it that there is a default option picked

    wxCalendarCtrl* calendarCtrl = new wxCalendarCtrl(panel, wxID_ANY, wxDefaultDateTime, wxPoint(550, 375), wxDefaultSize);

   // wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1));

    //wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices);

   // wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(485, 475), wxDefaultSize, choices);

    //dont deallocate memeory as wxwidgets does it for you

 
}
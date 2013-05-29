#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>

class Main:public wxApp
{
    public:
        virtual bool OnInit();
    protected:
    private:
};

class MainFrame:public wxFrame
{
    public:
        MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
    protected:
};

enum
{
    ID_Quit=1,
    ID_About
};


#endif // MAIN_H

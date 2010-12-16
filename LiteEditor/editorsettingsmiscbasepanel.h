///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __editorsettingsmiscbasepanel__
#define __editorsettingsmiscbasepanel__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/choice.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/checkbox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class EditorSettingsMiscBasePanel
///////////////////////////////////////////////////////////////////////////////
class EditorSettingsMiscBasePanel : public wxPanel 
{
	private:
	
	protected:
		wxChoice* m_toolbarIconSize;
		wxCheckBox* m_useSingleToolbar;
		wxCheckBox* m_checkBoxEnableMSWTheme;
		wxStaticText* m_staticText1;
		wxChoice* m_fileEncoding;
		wxCheckBox* m_SetLocale;
		
		wxStaticText* m_staticTextLocale;
		wxChoice* m_AvailableLocales;
		wxStaticText* m_staticText2;
		wxButton* m_clearButton;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_maxItemsFindReplace;
		wxStaticText* m_staticText4;
		wxSpinCtrl* m_spinCtrlMaxOpenTabs;
		wxCheckBox* m_showSplashScreen;
		wxCheckBox* m_singleAppInstance;
		wxCheckBox* m_versionCheckOnStartup;
		wxCheckBox* m_fullFilePath;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEnableThemeUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleChkUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleStaticUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleChoiceUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnClearButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearUI( wxUpdateUIEvent& event ) { event.Skip(); }
		
	
	public:
		
		EditorSettingsMiscBasePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL );
		~EditorSettingsMiscBasePanel();
	
};

#endif //__editorsettingsmiscbasepanel__

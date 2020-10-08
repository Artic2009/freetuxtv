//
// Created by ebeuque on 05/10/2020.
//

#ifndef FREETUXTV_QAPPLICATIONMAINWINDOWCONTROLLER_H
#define FREETUXTV_QAPPLICATIONMAINWINDOWCONTROLLER_H

#include <QObject>

class QAction;

class QApplicationMainWindow;

class Preferences;

class QApplicationMainWindowController: public QObject
{
	Q_OBJECT
public:
	QApplicationMainWindowController();
	virtual ~QApplicationMainWindowController();

public:
	void init(QApplicationMainWindow* pMainWindow, Preferences* pPreferences);
	void dispose();

private slots:
	// Menu actions
	void onPreferencesTriggered();
	void onQuitTriggered();
	void onAddGroupTriggered();
	void onSynchronizeTVChannelsTriggered();
	void onDeinterlaceModeTriggered(QAction *action);
	void onAboutTriggered();

	// Tab channels
	void onSearchTextChanged(const QString& szText);
	void onSearchTextResetClicked();
	void onJumpCurrentChannelClicked();

	// Ctrl bar
	void onSliderTimeChanged(int value);
	void onCtrlPlayClicked();
	void onCtrlStopClicked();
	void onCtrlRecordClicked();
	void onCtrlBackwardClicked();
	void onCtrlForwardClicked();
	void onSliderVolumeChanged(int value);
	void onCtrlFullScreenClicked();
	void onCtrlModeMiniClicked();

private:
	QApplicationMainWindow* m_pMainWindow;
	Preferences* m_pPreferences;
};


#endif //FREETUXTV_QAPPLICATIONMAINWINDOWCONTROLLER_H
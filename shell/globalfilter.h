/****************************************
 *
 *   theShell - Desktop Environment
 *   Copyright (C) 2018 Victor Tran
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * *************************************/

#ifndef GLOBALFILTER_H
#define GLOBALFILTER_H

#include <QObject>
#include <QApplication>
#include <QUrl>
#include <QSound>
#include <QSettings>
#include "background.h"

class GlobalFilter : public QObject
{
    Q_OBJECT
public:
    explicit GlobalFilter(QApplication *application, QObject *parent = 0);

signals:
    void removeBackgrounds();
    void changeBackgrounds();

public slots:
    void reloadScreens();
    void reloadBackgrounds();
    void newCommunityImage();

private:
    bool eventFilter(QObject *object, QEvent *event);

    QSound* clickSound;
};

#endif // GLOBALFILTER_H

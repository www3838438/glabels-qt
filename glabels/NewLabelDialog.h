/*  NewLabelDialog.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_NewLabelDialog_h
#define glabels_NewLabelDialog_h

#include "ui_NewLabelDialog.h"


namespace glabels
{

	///
	/// New Label Dialog Widget
	///
	class NewLabelDialog : public QDialog, public Ui_NewLabelDialog
	{
		Q_OBJECT


		/////////////////////////////////
		// Life Cycle
		/////////////////////////////////
	public:
		NewLabelDialog( QWidget *parent );


		/////////////////////////////////
		// Accessors
		/////////////////////////////////
		const libglabels::Template* tmplate() const;
		bool rotate() const;


		/////////////////////////////////
		// Slots
		/////////////////////////////////
	private slots:
		void searchEntryTextChanged( const QString &text );
		void pageSizeRadioToggled( bool checked );
		void templatePickerSelectionChanged();
		void orientationRadioToggled( bool checked );
		void createButtonClicked();

	};

}

#endif // glabels_NewLabelDialog_h
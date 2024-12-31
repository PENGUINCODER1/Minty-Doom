//
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

// Sound control menu

#include <stdlib.h>

#include "m_config.h"
#include "textscreen.h"
#include "mode.h"

#include "compatibility.h"

#define WINDOW_HELP_URL "https://www.chocolate-doom.org/setup-compat"

int vanilla_savegame_limit = 1;
int vanilla_demo_limit = 1;
int chainsaw_to_fist = 1;
int weap_cheat_enabled = 1;
int fhhall_cheat_enabled = 1;

void CompatibilitySettings(TXT_UNCAST_ARG(widget), void *user_data)
{
    txt_window_t *window;

    window = TXT_NewWindow("Compatibility");

    TXT_SetWindowHelpURL(window, WINDOW_HELP_URL);

    TXT_AddWidgets(window,
                   TXT_NewCheckBox("Vanilla savegame limit",
                                   &vanilla_savegame_limit),
                   TXT_NewCheckBox("Vanilla demo limit",
                                   &vanilla_demo_limit),
					TXT_NewCheckBox("Chainsaw To Fist w/o Berserk",
                                   &chainsaw_to_fist),
					TXT_NewCheckBox("WEAP Cheat",
                                   &weap_cheat_enabled),
					TXT_NewCheckBox("FHHALL Cheat",
                                   &fhhall_cheat_enabled),
                   NULL);
}

void BindCompatibilityVariables(void)
{
    M_BindIntVariable("vanilla_savegame_limit", &vanilla_savegame_limit);
    M_BindIntVariable("vanilla_demo_limit",     &vanilla_demo_limit);
	M_BindIntVariable("chainsaw_to_fist",     &chainsaw_to_fist);
	M_BindIntVariable("weap_cheat_enabled",     &weap_cheat_enabled);
	M_BindIntVariable("fhhall_cheat_enabled",    &fhhall_cheat_enabled);
}


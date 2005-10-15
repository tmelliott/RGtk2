#include "atkUserFuncs.h"
#include "pangoUserFuncs.h"
#include "gdkUserFuncs.h"
#include "gtkUserFuncs.h"
#ifdef HAVE_LIBGLADE
#include "libgladeUserFuncs.h"
#endif

/*** Manuals ***/

/* GLib */
void S_GCompareFunc(gconstpointer s_a, gconstpointer s_b);

/* GTK */
void S_GtkClipboardClearFunc(GtkClipboard *clipboard, gpointer user_data_or_owner);

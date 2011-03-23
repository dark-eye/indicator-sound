/* settings-manager.c generated by valac 0.11.7, the Vala compiler
 * generated from settings-manager.vala, do not modify */

/*
Copyright 2010 Canonical Ltd.

Authors:
    Conor Curran <conor.curran@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define TYPE_SETTINGS_MANAGER (settings_manager_get_type ())
#define SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_MANAGER, SettingsManager))
#define SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_MANAGER, SettingsManagerClass))
#define IS_SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_MANAGER))
#define IS_SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_MANAGER))
#define SETTINGS_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_MANAGER, SettingsManagerClass))

typedef struct _SettingsManager SettingsManager;
typedef struct _SettingsManagerClass SettingsManagerClass;
typedef struct _SettingsManagerPrivate SettingsManagerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _SettingsManager {
	GObject parent_instance;
	SettingsManagerPrivate * priv;
};

struct _SettingsManagerClass {
	GObjectClass parent_class;
};

struct _SettingsManagerPrivate {
	GSettings* settings;
};


static gpointer settings_manager_parent_class = NULL;

GType settings_manager_get_type (void) G_GNUC_CONST;
#define SETTINGS_MANAGER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SETTINGS_MANAGER, SettingsManagerPrivate))
enum  {
	SETTINGS_MANAGER_DUMMY_PROPERTY
};
SettingsManager* settings_manager_new (void);
SettingsManager* settings_manager_construct (GType object_type);
gchar** settings_manager_fetch_blacklist (SettingsManager* self, int* result_length1);
GeeArrayList* settings_manager_fetch_interested (SettingsManager* self);
static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle);
void settings_manager_clear_list (SettingsManager* self);
void settings_manager_add_interested (SettingsManager* self, const gchar* app_desktop_name);
static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value);
static void settings_manager_on_blacklist_event (SettingsManager* self);
static void g_cclosure_user_marshal_VOID__BOXED_INT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static GObject * settings_manager_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void _settings_manager_on_blacklist_event_g_settings_changed (GSettings* _sender, const gchar* key, gpointer self);
static void settings_manager_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


SettingsManager* settings_manager_construct (GType object_type) {
	SettingsManager * self = NULL;
	self = (SettingsManager*) g_object_new (object_type, NULL);
	return self;
}


SettingsManager* settings_manager_new (void) {
	return settings_manager_construct (TYPE_SETTINGS_MANAGER);
}


gchar** settings_manager_fetch_blacklist (SettingsManager* self, int* result_length1) {
	gchar** result = NULL;
	gchar** _tmp0_;
	gchar** _tmp1_ = NULL;
	gchar** _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = _tmp0_ = g_settings_get_strv (self->priv->settings, "blacklisted-media-players");
	_tmp2_ = _tmp1_;
	*result_length1 = _vala_array_length (_tmp0_);
	result = _tmp2_;
	return result;
}


static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (g_strcmp0 (stack[i], needle) == 0) {
			return TRUE;
		}
	}
	return FALSE;
}


GeeArrayList* settings_manager_fetch_interested (SettingsManager* self) {
	GeeArrayList* result = NULL;
	gchar** _tmp0_;
	gchar** _tmp1_ = NULL;
	gchar** blacklisted;
	gint blacklisted_length1;
	gint _blacklisted_size_;
	gchar** _tmp2_;
	gchar** _tmp3_ = NULL;
	gchar** interested;
	gint interested_length1;
	gint _interested_size_;
	GeeArrayList* _tmp4_ = NULL;
	GeeArrayList* list;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = _tmp0_ = g_settings_get_strv (self->priv->settings, "blacklisted-media-players");
	blacklisted = _tmp1_;
	blacklisted_length1 = _vala_array_length (_tmp0_);
	_blacklisted_size_ = _vala_array_length (_tmp0_);
	_tmp3_ = _tmp2_ = g_settings_get_strv (self->priv->settings, "interested-media-players");
	interested = _tmp3_;
	interested_length1 = _vala_array_length (_tmp2_);
	_interested_size_ = _vala_array_length (_tmp2_);
	_tmp4_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	list = _tmp4_;
	{
		gchar** s_collection;
		int s_collection_length1;
		int s_it;
		s_collection = interested;
		s_collection_length1 = interested_length1;
		for (s_it = 0; s_it < interested_length1; s_it = s_it + 1) {
			gchar* _tmp5_;
			gchar* s;
			_tmp5_ = g_strdup (s_collection[s_it]);
			s = _tmp5_;
			{
				gboolean _tmp6_;
				_tmp6_ = gee_abstract_collection_contains ((GeeAbstractCollection*) list, s);
				if (_tmp6_) {
					_g_free0 (s);
					continue;
				}
				if (_vala_string_array_contains (blacklisted, blacklisted_length1, s)) {
					_g_free0 (s);
					continue;
				}
				gee_abstract_collection_add ((GeeAbstractCollection*) list, s);
				_g_free0 (s);
			}
		}
	}
	result = list;
	interested = (_vala_array_free (interested, interested_length1, (GDestroyNotify) g_free), NULL);
	blacklisted = (_vala_array_free (blacklisted, blacklisted_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


void settings_manager_clear_list (SettingsManager* self) {
	g_return_if_fail (self != NULL);
	g_settings_reset (self->priv->settings, "interested-media-players");
}


static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


void settings_manager_add_interested (SettingsManager* self, const gchar* app_desktop_name) {
	gchar** _tmp0_;
	gchar** _tmp1_ = NULL;
	gchar** already_interested;
	gint already_interested_length1;
	gint _already_interested_size_;
	gchar* _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (app_desktop_name != NULL);
	_tmp1_ = _tmp0_ = g_settings_get_strv (self->priv->settings, "interested-media-players");
	already_interested = _tmp1_;
	already_interested_length1 = _vala_array_length (_tmp0_);
	_already_interested_size_ = _vala_array_length (_tmp0_);
	{
		gchar** s_collection;
		int s_collection_length1;
		int s_it;
		s_collection = already_interested;
		s_collection_length1 = already_interested_length1;
		for (s_it = 0; s_it < already_interested_length1; s_it = s_it + 1) {
			gchar* _tmp2_;
			gchar* s;
			_tmp2_ = g_strdup (s_collection[s_it]);
			s = _tmp2_;
			{
				if (g_strcmp0 (s, app_desktop_name) == 0) {
					_g_free0 (s);
					already_interested = (_vala_array_free (already_interested, already_interested_length1, (GDestroyNotify) g_free), NULL);
					return;
				}
				_g_free0 (s);
			}
		}
	}
	_tmp3_ = g_strdup (app_desktop_name);
	_vala_array_add1 (&already_interested, &already_interested_length1, &_already_interested_size_, _tmp3_);
	g_settings_set_strv (self->priv->settings, "interested-media-players", already_interested);
	g_settings_apply (self->priv->settings);
	already_interested = (_vala_array_free (already_interested, already_interested_length1, (GDestroyNotify) g_free), NULL);
}


static void settings_manager_on_blacklist_event (SettingsManager* self) {
	gchar** _tmp0_;
	gchar** _tmp1_ = NULL;
	gchar** _tmp2_;
	gint _tmp2__length1;
	g_return_if_fail (self != NULL);
	_tmp1_ = _tmp0_ = g_settings_get_strv (self->priv->settings, "blacklisted-media-players");
	_tmp2_ = _tmp1_;
	_tmp2__length1 = _vala_array_length (_tmp0_);
	g_signal_emit_by_name (self, "blacklist-updates", _tmp2_, _vala_array_length (_tmp0_));
	_tmp2_ = (_vala_array_free (_tmp2_, _tmp2__length1, (GDestroyNotify) g_free), NULL);
}


static void g_cclosure_user_marshal_VOID__BOXED_INT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__BOXED_INT) (gpointer data1, gpointer arg_1, gint arg_2, gpointer data2);
	register GMarshalFunc_VOID__BOXED_INT callback;
	register GCClosure * cc;
	register gpointer data1, data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__BOXED_INT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_boxed (param_values + 1), g_value_get_int (param_values + 2), data2);
}


static void _settings_manager_on_blacklist_event_g_settings_changed (GSettings* _sender, const gchar* key, gpointer self) {
	settings_manager_on_blacklist_event (self);
}


static GObject * settings_manager_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SettingsManager * self;
	GSettings* _tmp0_ = NULL;
	parent_class = G_OBJECT_CLASS (settings_manager_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = SETTINGS_MANAGER (obj);
	_tmp0_ = g_settings_new ("com.canonical.indicators.sound");
	_g_object_unref0 (self->priv->settings);
	self->priv->settings = _tmp0_;
	g_signal_connect_object (self->priv->settings, "changed::blacklisted-media-players", (GCallback) _settings_manager_on_blacklist_event_g_settings_changed, self, 0);
	return obj;
}


static void settings_manager_class_init (SettingsManagerClass * klass) {
	settings_manager_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SettingsManagerPrivate));
	G_OBJECT_CLASS (klass)->constructor = settings_manager_constructor;
	G_OBJECT_CLASS (klass)->finalize = settings_manager_finalize;
	g_signal_new ("blacklist_updates", TYPE_SETTINGS_MANAGER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__BOXED_INT, G_TYPE_NONE, 2, G_TYPE_STRV, G_TYPE_INT);
}


static void settings_manager_instance_init (SettingsManager * self) {
	self->priv = SETTINGS_MANAGER_GET_PRIVATE (self);
}


static void settings_manager_finalize (GObject* obj) {
	SettingsManager * self;
	self = SETTINGS_MANAGER (obj);
	_g_object_unref0 (self->priv->settings);
	G_OBJECT_CLASS (settings_manager_parent_class)->finalize (obj);
}


GType settings_manager_get_type (void) {
	static volatile gsize settings_manager_type_id__volatile = 0;
	if (g_once_init_enter (&settings_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SettingsManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) settings_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SettingsManager), 0, (GInstanceInitFunc) settings_manager_instance_init, NULL };
		GType settings_manager_type_id;
		settings_manager_type_id = g_type_register_static (G_TYPE_OBJECT, "SettingsManager", &g_define_type_info, 0);
		g_once_init_leave (&settings_manager_type_id__volatile, settings_manager_type_id);
	}
	return settings_manager_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}




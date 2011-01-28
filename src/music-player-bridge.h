/* music-player-bridge.h generated by valac 0.11.5, the Vala compiler, do not modify */


#ifndef __MUSIC_PLAYER_BRIDGE_H__
#define __MUSIC_PLAYER_BRIDGE_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <libdbusmenu-glib/client.h>
#include <libdbusmenu-glib/dbusmenu-glib.h>
#include <libdbusmenu-glib/menuitem-proxy.h>
#include <libdbusmenu-glib/menuitem.h>
#include <libdbusmenu-glib/server.h>
#include <gee.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define TYPE_MUSIC_PLAYER_BRIDGE (music_player_bridge_get_type ())
#define MUSIC_PLAYER_BRIDGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MUSIC_PLAYER_BRIDGE, MusicPlayerBridge))
#define MUSIC_PLAYER_BRIDGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MUSIC_PLAYER_BRIDGE, MusicPlayerBridgeClass))
#define IS_MUSIC_PLAYER_BRIDGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MUSIC_PLAYER_BRIDGE))
#define IS_MUSIC_PLAYER_BRIDGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MUSIC_PLAYER_BRIDGE))
#define MUSIC_PLAYER_BRIDGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MUSIC_PLAYER_BRIDGE, MusicPlayerBridgeClass))

typedef struct _MusicPlayerBridge MusicPlayerBridge;
typedef struct _MusicPlayerBridgeClass MusicPlayerBridgeClass;
typedef struct _MusicPlayerBridgePrivate MusicPlayerBridgePrivate;

#define TYPE_PLAYER_ITEM (player_item_get_type ())
#define PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_ITEM, PlayerItem))
#define PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_ITEM, PlayerItemClass))
#define IS_PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_ITEM))
#define IS_PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_ITEM))
#define PLAYER_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_ITEM, PlayerItemClass))

typedef struct _PlayerItem PlayerItem;
typedef struct _PlayerItemClass PlayerItemClass;
typedef struct _PlayerItemPrivate PlayerItemPrivate;

#define TYPE_TRANSPORT_MENUITEM (transport_menuitem_get_type ())
#define TRANSPORT_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TRANSPORT_MENUITEM, TransportMenuitem))
#define TRANSPORT_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TRANSPORT_MENUITEM, TransportMenuitemClass))
#define IS_TRANSPORT_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TRANSPORT_MENUITEM))
#define IS_TRANSPORT_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TRANSPORT_MENUITEM))
#define TRANSPORT_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TRANSPORT_MENUITEM, TransportMenuitemClass))

typedef struct _TransportMenuitem TransportMenuitem;
typedef struct _TransportMenuitemClass TransportMenuitemClass;
typedef struct _TransportMenuitemPrivate TransportMenuitemPrivate;

#define TRANSPORT_MENUITEM_TYPE_ACTION (transport_menuitem_action_get_type ())

#define TRANSPORT_MENUITEM_TYPE_STATE (transport_menuitem_state_get_type ())

#define TYPE_PLAYER_CONTROLLER (player_controller_get_type ())
#define PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_CONTROLLER, PlayerController))
#define PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))
#define IS_PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_CONTROLLER))
#define IS_PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_CONTROLLER))
#define PLAYER_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))

typedef struct _PlayerController PlayerController;
typedef struct _PlayerControllerClass PlayerControllerClass;

#define TYPE_METADATA_MENUITEM (metadata_menuitem_get_type ())
#define METADATA_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_METADATA_MENUITEM, MetadataMenuitem))
#define METADATA_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_METADATA_MENUITEM, MetadataMenuitemClass))
#define IS_METADATA_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_METADATA_MENUITEM))
#define IS_METADATA_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_METADATA_MENUITEM))
#define METADATA_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_METADATA_MENUITEM, MetadataMenuitemClass))

typedef struct _MetadataMenuitem MetadataMenuitem;
typedef struct _MetadataMenuitemClass MetadataMenuitemClass;
typedef struct _MetadataMenuitemPrivate MetadataMenuitemPrivate;

#define TYPE_TITLE_MENUITEM (title_menuitem_get_type ())
#define TITLE_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TITLE_MENUITEM, TitleMenuitem))
#define TITLE_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TITLE_MENUITEM, TitleMenuitemClass))
#define IS_TITLE_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TITLE_MENUITEM))
#define IS_TITLE_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TITLE_MENUITEM))
#define TITLE_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TITLE_MENUITEM, TitleMenuitemClass))

typedef struct _TitleMenuitem TitleMenuitem;
typedef struct _TitleMenuitemClass TitleMenuitemClass;
typedef struct _TitleMenuitemPrivate TitleMenuitemPrivate;
typedef struct _PlayerControllerPrivate PlayerControllerPrivate;

#define TYPE_MPRIS2_CONTROLLER (mpris2_controller_get_type ())
#define MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2Controller))
#define MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))
#define IS_MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS2_CONTROLLER))
#define IS_MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MPRIS2_CONTROLLER))
#define MPRIS2_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))

typedef struct _Mpris2Controller Mpris2Controller;
typedef struct _Mpris2ControllerClass Mpris2ControllerClass;

#define PLAYER_CONTROLLER_TYPE_WIDGET_ORDER (player_controller_widget_order_get_type ())

#define PLAYER_CONTROLLER_TYPE_STATE (player_controller_state_get_type ())

#define TYPE_MPRIS_ROOT (mpris_root_get_type ())
#define MPRIS_ROOT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS_ROOT, MprisRoot))
#define IS_MPRIS_ROOT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS_ROOT))
#define MPRIS_ROOT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_MPRIS_ROOT, MprisRootIface))

typedef struct _MprisRoot MprisRoot;
typedef struct _MprisRootIface MprisRootIface;

#define TYPE_MPRIS_ROOT_PROXY (mpris_root_proxy_get_type ())

#define TYPE_MPRIS_PLAYER (mpris_player_get_type ())
#define MPRIS_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS_PLAYER, MprisPlayer))
#define IS_MPRIS_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS_PLAYER))
#define MPRIS_PLAYER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_MPRIS_PLAYER, MprisPlayerIface))

typedef struct _MprisPlayer MprisPlayer;
typedef struct _MprisPlayerIface MprisPlayerIface;

#define TYPE_MPRIS_PLAYER_PROXY (mpris_player_proxy_get_type ())

#define TYPE_PLAYLIST_DETAILS (playlist_details_get_type ())
typedef struct _PlaylistDetails PlaylistDetails;

#define TYPE_ACTIVE_PLAYLIST_CONTAINER (active_playlist_container_get_type ())
typedef struct _ActivePlaylistContainer ActivePlaylistContainer;

#define TYPE_MPRIS_PLAYLISTS (mpris_playlists_get_type ())
#define MPRIS_PLAYLISTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS_PLAYLISTS, MprisPlaylists))
#define IS_MPRIS_PLAYLISTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS_PLAYLISTS))
#define MPRIS_PLAYLISTS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_MPRIS_PLAYLISTS, MprisPlaylistsIface))

typedef struct _MprisPlaylists MprisPlaylists;
typedef struct _MprisPlaylistsIface MprisPlaylistsIface;

#define TYPE_MPRIS_PLAYLISTS_PROXY (mpris_playlists_proxy_get_type ())

#define TYPE_MPRIS2_WATCHER (mpris2_watcher_get_type ())
#define MPRIS2_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS2_WATCHER, Mpris2Watcher))
#define MPRIS2_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MPRIS2_WATCHER, Mpris2WatcherClass))
#define IS_MPRIS2_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS2_WATCHER))
#define IS_MPRIS2_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MPRIS2_WATCHER))
#define MPRIS2_WATCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MPRIS2_WATCHER, Mpris2WatcherClass))

typedef struct _Mpris2Watcher Mpris2Watcher;
typedef struct _Mpris2WatcherClass Mpris2WatcherClass;
typedef struct _Mpris2WatcherPrivate Mpris2WatcherPrivate;
typedef struct _Mpris2ControllerPrivate Mpris2ControllerPrivate;

#define TYPE_FREE_DESKTOP_PROPERTIES (free_desktop_properties_get_type ())
#define FREE_DESKTOP_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FREE_DESKTOP_PROPERTIES, FreeDesktopProperties))
#define IS_FREE_DESKTOP_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FREE_DESKTOP_PROPERTIES))
#define FREE_DESKTOP_PROPERTIES_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_FREE_DESKTOP_PROPERTIES, FreeDesktopPropertiesIface))

typedef struct _FreeDesktopProperties FreeDesktopProperties;
typedef struct _FreeDesktopPropertiesIface FreeDesktopPropertiesIface;

#define TYPE_FREE_DESKTOP_PROPERTIES_PROXY (free_desktop_properties_proxy_get_type ())

#define TYPE_SETTINGS_MANAGER (settings_manager_get_type ())
#define SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_MANAGER, SettingsManager))
#define SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_MANAGER, SettingsManagerClass))
#define IS_SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_MANAGER))
#define IS_SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_MANAGER))
#define SETTINGS_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_MANAGER, SettingsManagerClass))

typedef struct _SettingsManager SettingsManager;
typedef struct _SettingsManagerClass SettingsManagerClass;
typedef struct _SettingsManagerPrivate SettingsManagerPrivate;

#define TYPE_PLAYLISTS_MENUITEM (playlists_menuitem_get_type ())
#define PLAYLISTS_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYLISTS_MENUITEM, PlaylistsMenuitem))
#define PLAYLISTS_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYLISTS_MENUITEM, PlaylistsMenuitemClass))
#define IS_PLAYLISTS_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYLISTS_MENUITEM))
#define IS_PLAYLISTS_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYLISTS_MENUITEM))
#define PLAYLISTS_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYLISTS_MENUITEM, PlaylistsMenuitemClass))

typedef struct _PlaylistsMenuitem PlaylistsMenuitem;
typedef struct _PlaylistsMenuitemClass PlaylistsMenuitemClass;
typedef struct _PlaylistsMenuitemPrivate PlaylistsMenuitemPrivate;

#define TYPE_FREE_DESKTOP_OBJECT (free_desktop_object_get_type ())
#define FREE_DESKTOP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FREE_DESKTOP_OBJECT, FreeDesktopObject))
#define IS_FREE_DESKTOP_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FREE_DESKTOP_OBJECT))
#define FREE_DESKTOP_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_FREE_DESKTOP_OBJECT, FreeDesktopObjectIface))

typedef struct _FreeDesktopObject FreeDesktopObject;
typedef struct _FreeDesktopObjectIface FreeDesktopObjectIface;

#define TYPE_FREE_DESKTOP_OBJECT_PROXY (free_desktop_object_proxy_get_type ())

#define TYPE_FREE_DESKTOP_INTROSPECTABLE (free_desktop_introspectable_get_type ())
#define FREE_DESKTOP_INTROSPECTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FREE_DESKTOP_INTROSPECTABLE, FreeDesktopIntrospectable))
#define IS_FREE_DESKTOP_INTROSPECTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FREE_DESKTOP_INTROSPECTABLE))
#define FREE_DESKTOP_INTROSPECTABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_FREE_DESKTOP_INTROSPECTABLE, FreeDesktopIntrospectableIface))

typedef struct _FreeDesktopIntrospectable FreeDesktopIntrospectable;
typedef struct _FreeDesktopIntrospectableIface FreeDesktopIntrospectableIface;

#define TYPE_FREE_DESKTOP_INTROSPECTABLE_PROXY (free_desktop_introspectable_proxy_get_type ())

#define TYPE_FETCH_FILE (fetch_file_get_type ())
#define FETCH_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FETCH_FILE, FetchFile))
#define FETCH_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FETCH_FILE, FetchFileClass))
#define IS_FETCH_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FETCH_FILE))
#define IS_FETCH_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FETCH_FILE))
#define FETCH_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FETCH_FILE, FetchFileClass))

typedef struct _FetchFile FetchFile;
typedef struct _FetchFileClass FetchFileClass;
typedef struct _FetchFilePrivate FetchFilePrivate;

struct _MusicPlayerBridge {
	GObject parent_instance;
	MusicPlayerBridgePrivate * priv;
};

struct _MusicPlayerBridgeClass {
	GObjectClass parent_class;
};

struct _PlayerItem {
	DbusmenuMenuitem parent_instance;
	PlayerItemPrivate * priv;
};

struct _PlayerItemClass {
	DbusmenuMenuitemClass parent_class;
};

struct _TransportMenuitem {
	PlayerItem parent_instance;
	TransportMenuitemPrivate * priv;
};

struct _TransportMenuitemClass {
	PlayerItemClass parent_class;
};

typedef enum  {
	TRANSPORT_MENUITEM_ACTION_PREVIOUS,
	TRANSPORT_MENUITEM_ACTION_PLAY_PAUSE,
	TRANSPORT_MENUITEM_ACTION_NEXT
} TransportMenuitemaction;

typedef enum  {
	TRANSPORT_MENUITEM_STATE_PLAYING,
	TRANSPORT_MENUITEM_STATE_PAUSED
} TransportMenuitemstate;

struct _MetadataMenuitem {
	PlayerItem parent_instance;
	MetadataMenuitemPrivate * priv;
};

struct _MetadataMenuitemClass {
	PlayerItemClass parent_class;
};

struct _TitleMenuitem {
	PlayerItem parent_instance;
	TitleMenuitemPrivate * priv;
};

struct _TitleMenuitemClass {
	PlayerItemClass parent_class;
};

struct _PlayerController {
	GObject parent_instance;
	PlayerControllerPrivate * priv;
	gint current_state;
	GeeArrayList* custom_items;
	Mpris2Controller* mpris_bridge;
	gboolean* use_playlists;
};

struct _PlayerControllerClass {
	GObjectClass parent_class;
};

typedef enum  {
	PLAYER_CONTROLLER_WIDGET_ORDER_SEPARATOR,
	PLAYER_CONTROLLER_WIDGET_ORDER_TITLE,
	PLAYER_CONTROLLER_WIDGET_ORDER_METADATA,
	PLAYER_CONTROLLER_WIDGET_ORDER_TRANSPORT,
	PLAYER_CONTROLLER_WIDGET_ORDER_PLAYLISTS
} PlayerControllerwidget_order;

typedef enum  {
	PLAYER_CONTROLLER_STATE_OFFLINE,
	PLAYER_CONTROLLER_STATE_INSTANTIATING,
	PLAYER_CONTROLLER_STATE_READY,
	PLAYER_CONTROLLER_STATE_CONNECTED,
	PLAYER_CONTROLLER_STATE_DISCONNECTED
} PlayerControllerstate;

struct _MprisRootIface {
	GTypeInterface parent_iface;
	void (*Quit) (MprisRoot* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Quit_finish) (MprisRoot* self, GAsyncResult* _res_, GError** error);
	void (*Raise) (MprisRoot* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Raise_finish) (MprisRoot* self, GAsyncResult* _res_, GError** error);
	gboolean (*get_HasTracklist) (MprisRoot* self);
	void (*set_HasTracklist) (MprisRoot* self, gboolean value);
	gboolean (*get_CanQuit) (MprisRoot* self);
	void (*set_CanQuit) (MprisRoot* self, gboolean value);
	gboolean (*get_CanRaise) (MprisRoot* self);
	void (*set_CanRaise) (MprisRoot* self, gboolean value);
	gchar* (*get_Identity) (MprisRoot* self);
	void (*set_Identity) (MprisRoot* self, const gchar* value);
	gchar* (*get_DesktopEntry) (MprisRoot* self);
	void (*set_DesktopEntry) (MprisRoot* self, const gchar* value);
};

struct _MprisPlayerIface {
	GTypeInterface parent_iface;
	void (*PlayPause) (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*PlayPause_finish) (MprisPlayer* self, GAsyncResult* _res_, GError** error);
	void (*Next) (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Next_finish) (MprisPlayer* self, GAsyncResult* _res_, GError** error);
	void (*Previous) (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Previous_finish) (MprisPlayer* self, GAsyncResult* _res_, GError** error);
	GHashTable* (*get_Metadata) (MprisPlayer* self);
	void (*set_Metadata) (MprisPlayer* self, GHashTable* value);
	gint32 (*get_Position) (MprisPlayer* self);
	void (*set_Position) (MprisPlayer* self, gint32 value);
	gchar* (*get_PlaybackStatus) (MprisPlayer* self);
	void (*set_PlaybackStatus) (MprisPlayer* self, const gchar* value);
};

struct _PlaylistDetails {
	char* path;
	gchar* name;
	gchar* icon_path;
};

struct _ActivePlaylistContainer {
	gboolean valid;
	PlaylistDetails details;
};

struct _MprisPlaylistsIface {
	GTypeInterface parent_iface;
	void (*ActivatePlaylist) (MprisPlaylists* self, const char* playlist_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*ActivatePlaylist_finish) (MprisPlaylists* self, GAsyncResult* _res_, GError** error);
	void (*GetPlaylists) (MprisPlaylists* self, guint32 index, guint32 max_count, const gchar* order, gboolean reverse_order, GAsyncReadyCallback _callback_, gpointer _user_data_);
	PlaylistDetails* (*GetPlaylists_finish) (MprisPlaylists* self, GAsyncResult* _res_, int* result_length1, GError** error);
	gchar** (*get_Orderings) (MprisPlaylists* self, int* result_length1);
	void (*set_Orderings) (MprisPlaylists* self, gchar** value, int value_length1);
	guint32 (*get_PlaylistCount) (MprisPlaylists* self);
	void (*set_PlaylistCount) (MprisPlaylists* self, guint32 value);
	void (*get_ActivePlaylist) (MprisPlaylists* self, ActivePlaylistContainer* value);
	void (*set_ActivePlaylist) (MprisPlaylists* self, ActivePlaylistContainer* value);
};

struct _Mpris2Watcher {
	GObject parent_instance;
	Mpris2WatcherPrivate * priv;
};

struct _Mpris2WatcherClass {
	GObjectClass parent_class;
};

struct _Mpris2Controller {
	GObject parent_instance;
	Mpris2ControllerPrivate * priv;
};

struct _Mpris2ControllerClass {
	GObjectClass parent_class;
};

struct _FreeDesktopPropertiesIface {
	GTypeInterface parent_iface;
};

struct _SettingsManager {
	GObject parent_instance;
	SettingsManagerPrivate * priv;
};

struct _SettingsManagerClass {
	GObjectClass parent_class;
};

struct _PlaylistsMenuitem {
	PlayerItem parent_instance;
	PlaylistsMenuitemPrivate * priv;
	DbusmenuMenuitem* root_item;
};

struct _PlaylistsMenuitemClass {
	PlayerItemClass parent_class;
};

struct _FreeDesktopObjectIface {
	GTypeInterface parent_iface;
	void (*list_names) (FreeDesktopObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	gchar** (*list_names_finish) (FreeDesktopObject* self, GAsyncResult* _res_, int* result_length1, GError** error);
};

struct _FreeDesktopIntrospectableIface {
	GTypeInterface parent_iface;
	gchar* (*Introspect) (FreeDesktopIntrospectable* self, GError** error);
};

typedef enum  {
	XML_ERROR_FILE_NOT_FOUND,
	XML_ERROR_XML_DOCUMENT_EMPTY
} XmlError;
#define XML_ERROR xml_error_quark ()
struct _FetchFile {
	GObject parent_instance;
	FetchFilePrivate * priv;
};

struct _FetchFileClass {
	GObjectClass parent_class;
};


GType music_player_bridge_get_type (void) G_GNUC_CONST;
MusicPlayerBridge* music_player_bridge_new (void);
MusicPlayerBridge* music_player_bridge_construct (GType object_type);
void music_player_bridge_client_has_become_available (MusicPlayerBridge* self, const gchar* desktop, const gchar* dbus_name, gboolean use_playlists);
void music_player_bridge_client_has_vanished (MusicPlayerBridge* self, const gchar* mpris_root_interface);
void music_player_bridge_set_root_menu_item (MusicPlayerBridge* self, DbusmenuMenuitem* menu);
GType player_item_get_type (void) G_GNUC_CONST;
GType transport_menuitem_get_type (void) G_GNUC_CONST;
GType transport_menuitem_action_get_type (void) G_GNUC_CONST;
GType transport_menuitem_state_get_type (void) G_GNUC_CONST;
GType player_controller_get_type (void) G_GNUC_CONST;
TransportMenuitem* transport_menuitem_new (PlayerController* parent);
TransportMenuitem* transport_menuitem_construct (GType object_type, PlayerController* parent);
void transport_menuitem_change_play_state (TransportMenuitem* self, TransportMenuitemstate update);
GeeHashSet* transport_menuitem_attributes_format (void);
GType metadata_menuitem_get_type (void) G_GNUC_CONST;
extern gchar* metadata_menuitem_album_art_cache_dir;
#define METADATA_MENUITEM_ALBUM_ART_DIR_SUFFIX "indicators/sound/album-art-cache"
MetadataMenuitem* metadata_menuitem_new (void);
MetadataMenuitem* metadata_menuitem_construct (GType object_type);
void metadata_menuitem_fetch_art (MetadataMenuitem* self, const gchar* uri, const gchar* prop);
GeeHashSet* metadata_menuitem_attributes_format (void);
GType title_menuitem_get_type (void) G_GNUC_CONST;
TitleMenuitem* title_menuitem_new (PlayerController* parent);
TitleMenuitem* title_menuitem_construct (GType object_type, PlayerController* parent);
void title_menuitem_toggle_active_triangle (TitleMenuitem* self, gboolean update);
GeeHashSet* title_menuitem_attributes_format (void);
GType mpris2_controller_get_type (void) G_GNUC_CONST;
GType player_controller_widget_order_get_type (void) G_GNUC_CONST;
GType player_controller_state_get_type (void) G_GNUC_CONST;
#define PLAYER_CONTROLLER_WIDGET_QUANTITY 5
PlayerController* player_controller_new (DbusmenuMenuitem* root, GAppInfo* app, const gchar* dbus_name, const gchar* icon_name, gint offset, gboolean* use_playlists, PlayerControllerstate initial_state);
PlayerController* player_controller_construct (GType object_type, DbusmenuMenuitem* root, GAppInfo* app, const gchar* dbus_name, const gchar* icon_name, gint offset, gboolean* use_playlists, PlayerControllerstate initial_state);
void player_controller_update_state (PlayerController* self, PlayerControllerstate new_state);
void player_controller_activate (PlayerController* self, const gchar* dbus_name);
void player_controller_instantiate (PlayerController* self);
void player_controller_vanish (PlayerController* self);
void player_controller_hibernate (PlayerController* self);
void player_controller_update_layout (PlayerController* self);
const gchar* player_controller_get_dbus_name (PlayerController* self);
void player_controller_set_dbus_name (PlayerController* self, const gchar* value);
GAppInfo* player_controller_get_app_info (PlayerController* self);
void player_controller_set_app_info (PlayerController* self, GAppInfo* value);
gint player_controller_get_menu_offset (PlayerController* self);
void player_controller_set_menu_offset (PlayerController* self, gint value);
const gchar* player_controller_get_icon_name (PlayerController* self);
void player_controller_set_icon_name (PlayerController* self, const gchar* value);
GType mpris_root_proxy_get_type (void) G_GNUC_CONST;
guint mpris_root_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType mpris_root_get_type (void) G_GNUC_CONST;
void mpris_root_Quit (MprisRoot* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_root_Quit_finish (MprisRoot* self, GAsyncResult* _res_, GError** error);
void mpris_root_Raise (MprisRoot* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_root_Raise_finish (MprisRoot* self, GAsyncResult* _res_, GError** error);
gboolean mpris_root_get_HasTracklist (MprisRoot* self);
void mpris_root_set_HasTracklist (MprisRoot* self, gboolean value);
gboolean mpris_root_get_CanQuit (MprisRoot* self);
void mpris_root_set_CanQuit (MprisRoot* self, gboolean value);
gboolean mpris_root_get_CanRaise (MprisRoot* self);
void mpris_root_set_CanRaise (MprisRoot* self, gboolean value);
gchar* mpris_root_get_Identity (MprisRoot* self);
void mpris_root_set_Identity (MprisRoot* self, const gchar* value);
gchar* mpris_root_get_DesktopEntry (MprisRoot* self);
void mpris_root_set_DesktopEntry (MprisRoot* self, const gchar* value);
GType mpris_player_proxy_get_type (void) G_GNUC_CONST;
guint mpris_player_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType mpris_player_get_type (void) G_GNUC_CONST;
void mpris_player_PlayPause (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_player_PlayPause_finish (MprisPlayer* self, GAsyncResult* _res_, GError** error);
void mpris_player_Next (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_player_Next_finish (MprisPlayer* self, GAsyncResult* _res_, GError** error);
void mpris_player_Previous (MprisPlayer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_player_Previous_finish (MprisPlayer* self, GAsyncResult* _res_, GError** error);
GHashTable* mpris_player_get_Metadata (MprisPlayer* self);
void mpris_player_set_Metadata (MprisPlayer* self, GHashTable* value);
gint32 mpris_player_get_Position (MprisPlayer* self);
void mpris_player_set_Position (MprisPlayer* self, gint32 value);
gchar* mpris_player_get_PlaybackStatus (MprisPlayer* self);
void mpris_player_set_PlaybackStatus (MprisPlayer* self, const gchar* value);
GType playlist_details_get_type (void) G_GNUC_CONST;
PlaylistDetails* playlist_details_dup (const PlaylistDetails* self);
void playlist_details_free (PlaylistDetails* self);
void playlist_details_copy (const PlaylistDetails* self, PlaylistDetails* dest);
void playlist_details_destroy (PlaylistDetails* self);
GType active_playlist_container_get_type (void) G_GNUC_CONST;
ActivePlaylistContainer* active_playlist_container_dup (const ActivePlaylistContainer* self);
void active_playlist_container_free (ActivePlaylistContainer* self);
void active_playlist_container_copy (const ActivePlaylistContainer* self, ActivePlaylistContainer* dest);
void active_playlist_container_destroy (ActivePlaylistContainer* self);
GType mpris_playlists_proxy_get_type (void) G_GNUC_CONST;
guint mpris_playlists_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType mpris_playlists_get_type (void) G_GNUC_CONST;
void mpris_playlists_ActivatePlaylist (MprisPlaylists* self, const char* playlist_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris_playlists_ActivatePlaylist_finish (MprisPlaylists* self, GAsyncResult* _res_, GError** error);
void mpris_playlists_GetPlaylists (MprisPlaylists* self, guint32 index, guint32 max_count, const gchar* order, gboolean reverse_order, GAsyncReadyCallback _callback_, gpointer _user_data_);
PlaylistDetails* mpris_playlists_GetPlaylists_finish (MprisPlaylists* self, GAsyncResult* _res_, int* result_length1, GError** error);
gchar** mpris_playlists_get_Orderings (MprisPlaylists* self, int* result_length1);
void mpris_playlists_set_Orderings (MprisPlaylists* self, gchar** value, int value_length1);
guint32 mpris_playlists_get_PlaylistCount (MprisPlaylists* self);
void mpris_playlists_set_PlaylistCount (MprisPlaylists* self, guint32 value);
void mpris_playlists_get_ActivePlaylist (MprisPlaylists* self, ActivePlaylistContainer* result);
void mpris_playlists_set_ActivePlaylist (MprisPlaylists* self, ActivePlaylistContainer* value);
GType mpris2_watcher_get_type (void) G_GNUC_CONST;
Mpris2Watcher* mpris2_watcher_new (void);
Mpris2Watcher* mpris2_watcher_construct (GType object_type);
Mpris2Controller* mpris2_controller_new (PlayerController* ctrl);
Mpris2Controller* mpris2_controller_construct (GType object_type, PlayerController* ctrl);
void mpris2_controller_property_changed_cb (Mpris2Controller* self, const gchar* interface_source, GHashTable* changed_properties, gchar** invalid, int invalid_length1);
void mpris2_controller_initial_update (Mpris2Controller* self);
void mpris2_controller_transport_update (Mpris2Controller* self, TransportMenuitemaction command);
gboolean mpris2_controller_connected (Mpris2Controller* self);
void mpris2_controller_expose (Mpris2Controller* self);
void mpris2_controller_fetch_playlists (Mpris2Controller* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void mpris2_controller_fetch_playlists_finish (Mpris2Controller* self, GAsyncResult* _res_);
void mpris2_controller_activate_playlist (Mpris2Controller* self, const char* path);
MprisRoot* mpris2_controller_get_mpris2_root (Mpris2Controller* self);
MprisPlayer* mpris2_controller_get_player (Mpris2Controller* self);
MprisPlaylists* mpris2_controller_get_playlists (Mpris2Controller* self);
GType free_desktop_properties_get_type (void) G_GNUC_CONST;
GType free_desktop_properties_proxy_get_type (void) G_GNUC_CONST;
guint free_desktop_properties_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
FreeDesktopProperties* mpris2_controller_get_properties_interface (Mpris2Controller* self);
PlayerController* mpris2_controller_get_owner (Mpris2Controller* self);
PlayerItem* player_item_new (const gchar* type);
PlayerItem* player_item_construct (GType object_type, const gchar* type);
void player_item_reset (PlayerItem* self, GeeHashSet* attrs);
void player_item_update (PlayerItem* self, GHashTable* data, GeeHashSet* attributes);
gboolean player_item_populated (PlayerItem* self, GeeHashSet* attrs);
PlayerController* player_item_get_owner (PlayerItem* self);
const gchar* player_item_get_item_type (PlayerItem* self);
GType settings_manager_get_type (void) G_GNUC_CONST;
SettingsManager* settings_manager_new (void);
SettingsManager* settings_manager_construct (GType object_type);
gchar** settings_manager_fetch_blacklist (SettingsManager* self, int* result_length1);
GeeArrayList* settings_manager_fetch_interested (SettingsManager* self);
void settings_manager_clear_list (SettingsManager* self);
void settings_manager_add_interested (SettingsManager* self, const gchar* app_desktop_name);
GType playlists_menuitem_get_type (void) G_GNUC_CONST;
PlaylistsMenuitem* playlists_menuitem_new (PlayerController* parent);
PlaylistsMenuitem* playlists_menuitem_construct (GType object_type, PlayerController* parent);
void playlists_menuitem_update (PlaylistsMenuitem* self, PlaylistDetails* playlists, int playlists_length1);
void playlists_menuitem_update_active_playlist (PlaylistsMenuitem* self, PlaylistDetails* detail);
GeeHashSet* playlists_menuitem_attributes_format (void);
GType free_desktop_object_proxy_get_type (void) G_GNUC_CONST;
guint free_desktop_object_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType free_desktop_object_get_type (void) G_GNUC_CONST;
void free_desktop_object_list_names (FreeDesktopObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
gchar** free_desktop_object_list_names_finish (FreeDesktopObject* self, GAsyncResult* _res_, int* result_length1, GError** error);
GType free_desktop_introspectable_proxy_get_type (void) G_GNUC_CONST;
guint free_desktop_introspectable_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType free_desktop_introspectable_get_type (void) G_GNUC_CONST;
gchar* free_desktop_introspectable_Introspect (FreeDesktopIntrospectable* self, GError** error);
GQuark xml_error_quark (void);
GType fetch_file_get_type (void) G_GNUC_CONST;
FetchFile* fetch_file_new (const gchar* uri, const gchar* prop);
FetchFile* fetch_file_construct (GType object_type, const gchar* uri, const gchar* prop);
void fetch_file_fetch_data (FetchFile* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void fetch_file_fetch_data_finish (FetchFile* self, GAsyncResult* _res_);
const gchar* fetch_file_get_uri (FetchFile* self);
const gchar* fetch_file_get_intended_property (FetchFile* self);


G_END_DECLS

#endif

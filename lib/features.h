/* libtinynotify -- feature check macros
 * (c) 2011 Michał Górny
 * 2-clause BSD-licensed
 */

#pragma once
#ifndef _TINYNOTIFY_FEATURES_H
#define _TINYNOTIFY_FEATURES_H

/**
 * SECTION: NotifyFeatures
 * @short_description: feature check macros
 * @include: tinynotify.h
 *
 * As of 0.1.1, libtinynotify provides a set of macro definitions listing
 * available features. This way, one doesn't have to depend on random version
 * numbers nor perform configure checks -- it is enough to use \#ifdef with one
 * of the predefined names.
 */

/**
 * LIBTINYNOTIFY_HAS_EVENT_API
 *
 * Denotes that libtinynotify has event API with notify_session_dispatch()
 * method and relevant types and constants. This also implies that it is
 * capable of handling 'close' event.
 */
#define LIBTINYNOTIFY_HAS_EVENT_API 1

/**
 * LIBTINYNOTIFY_HAS_ACTIONS
 *
 * Denotes that libtinynotify has support for actions; basically,
 * notification_bind_action().
 */
#define LIBTINYNOTIFY_HAS_ACTIONS 1

#endif /*_TINYNOTIFY_FEATURES_H*/

/**
 *   SFCGAL
 *
 *   Copyright (C) 2012-2013 Oslandia <infos@oslandia.com>
 *   Copyright (C) 2012-2013 IGN (http://www.ign.fr)
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Library General Public
 *   License as published by the Free Software Foundation; either
 *   version 2 of the License, or (at your option) any later version.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Library General Public License for more details.

 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SFCGAL_MULTIPOLYGON_H_
#define _SFCGAL_MULTIPOLYGON_H_

#include <SFCGAL/Collection.h>
#include <SFCGAL/Polygon.h>

namespace SFCGAL {
    
    /**
     * A collection of polygons
     */
    template < typename K, int N >
    using MultiPolygon = Collection< Polygon<K,N> > ;
    
    // TODO remove
    template < typename K, int N >
    using PolyhedralSurface = MultiPolygon<K,N> ;

} // SFCGAL

#endif
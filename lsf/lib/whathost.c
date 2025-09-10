/* $Id: whathost.c,v 1.4 2007/08/15 22:18:51 tmizan Exp $
 * Copyright (C) 2007 Platform Computing Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 *
 */


#include <stdio.h>
#include <sys/types.h>  
#include <sys/file.h>  
#include <string.h>
#include <malloc.h>

#include <sys/time.h>   
#include <sys/stat.h>
#include <sys/param.h>
#include <netdb.h>      
#include <netinet/in.h>
#include <errno.h>
#include <sys/wait.h>

#include <sys/mount.h>
#include <mntent.h>

#include "../lsf.h"
#include "../../config.h"
extern const char *getHostOfficialByName_ (const char *);

char *ls_getmnthost(char *file)
{
    struct stat statb;

    if (stat(file, &statb) < 0) {
        return (NULL);
    }

    return (NULL);

} 



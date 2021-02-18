#include <clibs/utils/log.h>

#include "version.h"

// print full crunchmark version information 
void crunchmark_version_print_full (void) {

    clibs_log_both (
        LOG_TYPE_NONE, LOG_TYPE_NONE,
        "Crunchmark Version: %s", CRUNCHMARK_VERSION_NAME
    );

    clibs_log_both (
        LOG_TYPE_NONE, LOG_TYPE_NONE,
        "Release Date & time: %s - %s", CRUNCHMARK_VERSION_DATE, CRUNCHMARK_VERSION_TIME
    );

    clibs_log_both (
        LOG_TYPE_NONE, LOG_TYPE_NONE,
        "Author: %s\n", CRUNCHMARK_VERSION_AUTHOR
    );


}

// print the version id
void crunchmark_version_print_version_id (void) {

    clibs_log_both (
        LOG_TYPE_NONE, LOG_TYPE_NONE,
        "Crunchmark Version ID: %s", CRUNCHMARK_VERSION
    );

}

// print the version name
void crunchmark_version_print_version_name (void) {

    clibs_log_both (
        LOG_TYPE_NONE, LOG_TYPE_NONE,
        "Crunchmark Version: %s", CRUNCHMARK_VERSION_NAME
    );

}
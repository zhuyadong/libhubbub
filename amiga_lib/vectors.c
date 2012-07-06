
/* This file was generated by idltool 53.1. Do not edit */

#ifndef EXEC_TYPES_H
#include <exec/types.h>

#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

STATIC CONST APTR main_vectors[] =
{
     HubbubObtain,
     HubbubRelease,
    NULL,
    NULL,
	/* hubbub/errors.h */
	hubbub_error_to_string,

	/* hubbub/hubbub.h */
	/* lib private
	hubbub_initialise,
	hubbub_finalise,
	*/

	/* hubbub/parser.h */
	hubbub_parser_create,
	hubbub_parser_destroy,
	hubbub_parser_setopt,
	hubbub_parser_parse_chunk,
	hubbub_parser_completed,
	hubbub_parser_read_charset,

	/* added in v2 */
	hubbub_parser_insert_chunk,
    (APTR)-1
};


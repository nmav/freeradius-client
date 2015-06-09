/*
 * Copyright (c) 2015, Red Hat, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @defgroup radcli-api Main API
 * @brief Main API Functions 
 *
 * @{
 */

#include <includes.h>
#include <radcli/radcli.h>

/** Returns the secret available in this request info. It is the secret value
 * used in the request.
 *
 * @param info a pointer to a REQUEST_INFO structure.
 * @return a null-terminated string.
 */
const char *rc_request_info_get_secret (REQUEST_INFO *info)
{
	return info->secret;
}

/** Returns a pointer request vector used in the request.
 * It is of AUTH_VECTOR_LEN size.
 *
 * @param info a pointer to a REQUEST_INFO structure.
 * @return a pointer to the vector.
 */
const void *rc_request_info_get_vector (REQUEST_INFO *info)
{
	return info->request_vector;
}


/** Deinitializes a REQUEST_INFO structure.
 *
 * @param info a pointer to a REQUEST_INFO structure.
 */
void rc_request_info_free (REQUEST_INFO *info)
{
	free(info);
}

/** @} */

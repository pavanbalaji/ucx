/**
 * Copyright (C) Mellanox Technologies Ltd. 2020.  ALL RIGHTS RESERVED.
 *
 * See file LICENSE for terms.
 */

#ifndef UCP_PROTO_SINGLE_H_
#define UCP_PROTO_SINGLE_H_

#include "proto.h"
#include "proto_common.h"


typedef struct {
    ucp_lane_index_t                lane;     /* Lane for send operations */
    ucp_md_index_t                  md_index; /* Memory domain for registration */
} ucp_proto_single_priv_t;


typedef struct {
    ucp_proto_common_init_params_t  super;
    ucp_lane_type_t                 lane_type;    /* Type of lane to select */
    uint64_t                        tl_cap_flags; /* Required iface capabilities */
} ucp_proto_single_init_params_t;


ucs_status_t ucp_proto_single_init(const ucp_proto_single_init_params_t *params);


void ucp_proto_single_config_str(const void *priv, ucs_string_buffer_t *strb);

#endif

// MESSAGE PRESSUREWING_LIFT PACKING

#define MAVLINK_MSG_ID_PRESSUREWING_LIFT 223

typedef struct __mavlink_pressurewing_lift_t
{
 float local_lift_left[10]; /*< Local lifts from planar pressure approximation, left wing*/
 float local_lift_right[10]; /*< Local lifts from planar pressure approximation, right wing*/
 float estim_lift_left; /*< Estimated lift of entire Left wing, derived from local lifts*/
 float estim_lift_right; /*< Estimated lift of entire Right wing, derived from local lifts*/
} mavlink_pressurewing_lift_t;

#define MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN 88
#define MAVLINK_MSG_ID_223_LEN 88

#define MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC 158
#define MAVLINK_MSG_ID_223_CRC 158

#define MAVLINK_MSG_PRESSUREWING_LIFT_FIELD_LOCAL_LIFT_LEFT_LEN 10
#define MAVLINK_MSG_PRESSUREWING_LIFT_FIELD_LOCAL_LIFT_RIGHT_LEN 10

#define MAVLINK_MESSAGE_INFO_PRESSUREWING_LIFT { \
	"PRESSUREWING_LIFT", \
	4, \
	{  { "local_lift_left", NULL, MAVLINK_TYPE_FLOAT, 10, 0, offsetof(mavlink_pressurewing_lift_t, local_lift_left) }, \
         { "local_lift_right", NULL, MAVLINK_TYPE_FLOAT, 10, 40, offsetof(mavlink_pressurewing_lift_t, local_lift_right) }, \
         { "estim_lift_left", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_pressurewing_lift_t, estim_lift_left) }, \
         { "estim_lift_right", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_pressurewing_lift_t, estim_lift_right) }, \
         } \
}


/**
 * @brief Pack a pressurewing_lift message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param local_lift_left Local lifts from planar pressure approximation, left wing
 * @param local_lift_right Local lifts from planar pressure approximation, right wing
 * @param estim_lift_left Estimated lift of entire Left wing, derived from local lifts
 * @param estim_lift_right Estimated lift of entire Right wing, derived from local lifts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_lift_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *local_lift_left, const float *local_lift_right, float estim_lift_left, float estim_lift_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN];
	_mav_put_float(buf, 80, estim_lift_left);
	_mav_put_float(buf, 84, estim_lift_right);
	_mav_put_float_array(buf, 0, local_lift_left, 10);
	_mav_put_float_array(buf, 40, local_lift_right, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#else
	mavlink_pressurewing_lift_t packet;
	packet.estim_lift_left = estim_lift_left;
	packet.estim_lift_right = estim_lift_right;
	mav_array_memcpy(packet.local_lift_left, local_lift_left, sizeof(float)*10);
	mav_array_memcpy(packet.local_lift_right, local_lift_right, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_LIFT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
}

/**
 * @brief Pack a pressurewing_lift message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param local_lift_left Local lifts from planar pressure approximation, left wing
 * @param local_lift_right Local lifts from planar pressure approximation, right wing
 * @param estim_lift_left Estimated lift of entire Left wing, derived from local lifts
 * @param estim_lift_right Estimated lift of entire Right wing, derived from local lifts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_lift_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *local_lift_left,const float *local_lift_right,float estim_lift_left,float estim_lift_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN];
	_mav_put_float(buf, 80, estim_lift_left);
	_mav_put_float(buf, 84, estim_lift_right);
	_mav_put_float_array(buf, 0, local_lift_left, 10);
	_mav_put_float_array(buf, 40, local_lift_right, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#else
	mavlink_pressurewing_lift_t packet;
	packet.estim_lift_left = estim_lift_left;
	packet.estim_lift_right = estim_lift_right;
	mav_array_memcpy(packet.local_lift_left, local_lift_left, sizeof(float)*10);
	mav_array_memcpy(packet.local_lift_right, local_lift_right, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_LIFT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
}

/**
 * @brief Encode a pressurewing_lift struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_lift C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_lift_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pressurewing_lift_t* pressurewing_lift)
{
	return mavlink_msg_pressurewing_lift_pack(system_id, component_id, msg, pressurewing_lift->local_lift_left, pressurewing_lift->local_lift_right, pressurewing_lift->estim_lift_left, pressurewing_lift->estim_lift_right);
}

/**
 * @brief Encode a pressurewing_lift struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_lift C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_lift_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pressurewing_lift_t* pressurewing_lift)
{
	return mavlink_msg_pressurewing_lift_pack_chan(system_id, component_id, chan, msg, pressurewing_lift->local_lift_left, pressurewing_lift->local_lift_right, pressurewing_lift->estim_lift_left, pressurewing_lift->estim_lift_right);
}

/**
 * @brief Send a pressurewing_lift message
 * @param chan MAVLink channel to send the message
 *
 * @param local_lift_left Local lifts from planar pressure approximation, left wing
 * @param local_lift_right Local lifts from planar pressure approximation, right wing
 * @param estim_lift_left Estimated lift of entire Left wing, derived from local lifts
 * @param estim_lift_right Estimated lift of entire Right wing, derived from local lifts
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pressurewing_lift_send(mavlink_channel_t chan, const float *local_lift_left, const float *local_lift_right, float estim_lift_left, float estim_lift_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN];
	_mav_put_float(buf, 80, estim_lift_left);
	_mav_put_float(buf, 84, estim_lift_right);
	_mav_put_float_array(buf, 0, local_lift_left, 10);
	_mav_put_float_array(buf, 40, local_lift_right, 10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
#else
	mavlink_pressurewing_lift_t packet;
	packet.estim_lift_left = estim_lift_left;
	packet.estim_lift_right = estim_lift_right;
	mav_array_memcpy(packet.local_lift_left, local_lift_left, sizeof(float)*10);
	mav_array_memcpy(packet.local_lift_right, local_lift_right, sizeof(float)*10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pressurewing_lift_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *local_lift_left, const float *local_lift_right, float estim_lift_left, float estim_lift_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 80, estim_lift_left);
	_mav_put_float(buf, 84, estim_lift_right);
	_mav_put_float_array(buf, 0, local_lift_left, 10);
	_mav_put_float_array(buf, 40, local_lift_right, 10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, buf, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
#else
	mavlink_pressurewing_lift_t *packet = (mavlink_pressurewing_lift_t *)msgbuf;
	packet->estim_lift_left = estim_lift_left;
	packet->estim_lift_right = estim_lift_right;
	mav_array_memcpy(packet->local_lift_left, local_lift_left, sizeof(float)*10);
	mav_array_memcpy(packet->local_lift_right, local_lift_right, sizeof(float)*10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN, MAVLINK_MSG_ID_PRESSUREWING_LIFT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_LIFT, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PRESSUREWING_LIFT UNPACKING


/**
 * @brief Get field local_lift_left from pressurewing_lift message
 *
 * @return Local lifts from planar pressure approximation, left wing
 */
static inline uint16_t mavlink_msg_pressurewing_lift_get_local_lift_left(const mavlink_message_t* msg, float *local_lift_left)
{
	return _MAV_RETURN_float_array(msg, local_lift_left, 10,  0);
}

/**
 * @brief Get field local_lift_right from pressurewing_lift message
 *
 * @return Local lifts from planar pressure approximation, right wing
 */
static inline uint16_t mavlink_msg_pressurewing_lift_get_local_lift_right(const mavlink_message_t* msg, float *local_lift_right)
{
	return _MAV_RETURN_float_array(msg, local_lift_right, 10,  40);
}

/**
 * @brief Get field estim_lift_left from pressurewing_lift message
 *
 * @return Estimated lift of entire Left wing, derived from local lifts
 */
static inline float mavlink_msg_pressurewing_lift_get_estim_lift_left(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field estim_lift_right from pressurewing_lift message
 *
 * @return Estimated lift of entire Right wing, derived from local lifts
 */
static inline float mavlink_msg_pressurewing_lift_get_estim_lift_right(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Decode a pressurewing_lift message into a struct
 *
 * @param msg The message to decode
 * @param pressurewing_lift C-struct to decode the message contents into
 */
static inline void mavlink_msg_pressurewing_lift_decode(const mavlink_message_t* msg, mavlink_pressurewing_lift_t* pressurewing_lift)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_pressurewing_lift_get_local_lift_left(msg, pressurewing_lift->local_lift_left);
	mavlink_msg_pressurewing_lift_get_local_lift_right(msg, pressurewing_lift->local_lift_right);
	pressurewing_lift->estim_lift_left = mavlink_msg_pressurewing_lift_get_estim_lift_left(msg);
	pressurewing_lift->estim_lift_right = mavlink_msg_pressurewing_lift_get_estim_lift_right(msg);
#else
	memcpy(pressurewing_lift, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PRESSUREWING_LIFT_LEN);
#endif
}

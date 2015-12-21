// MESSAGE PRESSUREWING_WING_DATA PACKING

#define MAVLINK_MSG_ID_PRESSUREWING_WING_DATA 224

typedef struct __mavlink_pressurewing_wing_data_t
{
 float pressure_pascal[20]; /*< Pressure measured in Pa*/
 float local_lift[10]; /*< Local lifts from planar pressure approximation*/
 float estim_lift; /*< Estimated lift of entire wing, derived from local lifts*/
 uint16_t pressure_digital[20]; /*< 14 bit digital pressure*/
 uint8_t wing; /*< Side of wing (0 for left, 1 for right)*/
} mavlink_pressurewing_wing_data_t;

#define MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN 165
#define MAVLINK_MSG_ID_224_LEN 165

#define MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC 214
#define MAVLINK_MSG_ID_224_CRC 214

#define MAVLINK_MSG_PRESSUREWING_WING_DATA_FIELD_PRESSURE_PASCAL_LEN 20
#define MAVLINK_MSG_PRESSUREWING_WING_DATA_FIELD_LOCAL_LIFT_LEN 10
#define MAVLINK_MSG_PRESSUREWING_WING_DATA_FIELD_PRESSURE_DIGITAL_LEN 20

#define MAVLINK_MESSAGE_INFO_PRESSUREWING_WING_DATA { \
	"PRESSUREWING_WING_DATA", \
	5, \
	{  { "pressure_pascal", NULL, MAVLINK_TYPE_FLOAT, 20, 0, offsetof(mavlink_pressurewing_wing_data_t, pressure_pascal) }, \
         { "local_lift", NULL, MAVLINK_TYPE_FLOAT, 10, 80, offsetof(mavlink_pressurewing_wing_data_t, local_lift) }, \
         { "estim_lift", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_pressurewing_wing_data_t, estim_lift) }, \
         { "pressure_digital", NULL, MAVLINK_TYPE_UINT16_T, 20, 124, offsetof(mavlink_pressurewing_wing_data_t, pressure_digital) }, \
         { "wing", NULL, MAVLINK_TYPE_UINT8_T, 0, 164, offsetof(mavlink_pressurewing_wing_data_t, wing) }, \
         } \
}


/**
 * @brief Pack a pressurewing_wing_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param wing Side of wing (0 for left, 1 for right)
 * @param pressure_digital 14 bit digital pressure
 * @param pressure_pascal Pressure measured in Pa
 * @param local_lift Local lifts from planar pressure approximation
 * @param estim_lift Estimated lift of entire wing, derived from local lifts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t wing, const uint16_t *pressure_digital, const float *pressure_pascal, const float *local_lift, float estim_lift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN];
	_mav_put_float(buf, 120, estim_lift);
	_mav_put_uint8_t(buf, 164, wing);
	_mav_put_float_array(buf, 0, pressure_pascal, 20);
	_mav_put_float_array(buf, 80, local_lift, 10);
	_mav_put_uint16_t_array(buf, 124, pressure_digital, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#else
	mavlink_pressurewing_wing_data_t packet;
	packet.estim_lift = estim_lift;
	packet.wing = wing;
	mav_array_memcpy(packet.pressure_pascal, pressure_pascal, sizeof(float)*20);
	mav_array_memcpy(packet.local_lift, local_lift, sizeof(float)*10);
	mav_array_memcpy(packet.pressure_digital, pressure_digital, sizeof(uint16_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_WING_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
}

/**
 * @brief Pack a pressurewing_wing_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wing Side of wing (0 for left, 1 for right)
 * @param pressure_digital 14 bit digital pressure
 * @param pressure_pascal Pressure measured in Pa
 * @param local_lift Local lifts from planar pressure approximation
 * @param estim_lift Estimated lift of entire wing, derived from local lifts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t wing,const uint16_t *pressure_digital,const float *pressure_pascal,const float *local_lift,float estim_lift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN];
	_mav_put_float(buf, 120, estim_lift);
	_mav_put_uint8_t(buf, 164, wing);
	_mav_put_float_array(buf, 0, pressure_pascal, 20);
	_mav_put_float_array(buf, 80, local_lift, 10);
	_mav_put_uint16_t_array(buf, 124, pressure_digital, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#else
	mavlink_pressurewing_wing_data_t packet;
	packet.estim_lift = estim_lift;
	packet.wing = wing;
	mav_array_memcpy(packet.pressure_pascal, pressure_pascal, sizeof(float)*20);
	mav_array_memcpy(packet.local_lift, local_lift, sizeof(float)*10);
	mav_array_memcpy(packet.pressure_digital, pressure_digital, sizeof(uint16_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_WING_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
}

/**
 * @brief Encode a pressurewing_wing_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_wing_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pressurewing_wing_data_t* pressurewing_wing_data)
{
	return mavlink_msg_pressurewing_wing_data_pack(system_id, component_id, msg, pressurewing_wing_data->wing, pressurewing_wing_data->pressure_digital, pressurewing_wing_data->pressure_pascal, pressurewing_wing_data->local_lift, pressurewing_wing_data->estim_lift);
}

/**
 * @brief Encode a pressurewing_wing_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_wing_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pressurewing_wing_data_t* pressurewing_wing_data)
{
	return mavlink_msg_pressurewing_wing_data_pack_chan(system_id, component_id, chan, msg, pressurewing_wing_data->wing, pressurewing_wing_data->pressure_digital, pressurewing_wing_data->pressure_pascal, pressurewing_wing_data->local_lift, pressurewing_wing_data->estim_lift);
}

/**
 * @brief Send a pressurewing_wing_data message
 * @param chan MAVLink channel to send the message
 *
 * @param wing Side of wing (0 for left, 1 for right)
 * @param pressure_digital 14 bit digital pressure
 * @param pressure_pascal Pressure measured in Pa
 * @param local_lift Local lifts from planar pressure approximation
 * @param estim_lift Estimated lift of entire wing, derived from local lifts
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pressurewing_wing_data_send(mavlink_channel_t chan, uint8_t wing, const uint16_t *pressure_digital, const float *pressure_pascal, const float *local_lift, float estim_lift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN];
	_mav_put_float(buf, 120, estim_lift);
	_mav_put_uint8_t(buf, 164, wing);
	_mav_put_float_array(buf, 0, pressure_pascal, 20);
	_mav_put_float_array(buf, 80, local_lift, 10);
	_mav_put_uint16_t_array(buf, 124, pressure_digital, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
#else
	mavlink_pressurewing_wing_data_t packet;
	packet.estim_lift = estim_lift;
	packet.wing = wing;
	mav_array_memcpy(packet.pressure_pascal, pressure_pascal, sizeof(float)*20);
	mav_array_memcpy(packet.local_lift, local_lift, sizeof(float)*10);
	mav_array_memcpy(packet.pressure_digital, pressure_digital, sizeof(uint16_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pressurewing_wing_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t wing, const uint16_t *pressure_digital, const float *pressure_pascal, const float *local_lift, float estim_lift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 120, estim_lift);
	_mav_put_uint8_t(buf, 164, wing);
	_mav_put_float_array(buf, 0, pressure_pascal, 20);
	_mav_put_float_array(buf, 80, local_lift, 10);
	_mav_put_uint16_t_array(buf, 124, pressure_digital, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, buf, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
#else
	mavlink_pressurewing_wing_data_t *packet = (mavlink_pressurewing_wing_data_t *)msgbuf;
	packet->estim_lift = estim_lift;
	packet->wing = wing;
	mav_array_memcpy(packet->pressure_pascal, pressure_pascal, sizeof(float)*20);
	mav_array_memcpy(packet->local_lift, local_lift, sizeof(float)*10);
	mav_array_memcpy(packet->pressure_digital, pressure_digital, sizeof(uint16_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PRESSUREWING_WING_DATA UNPACKING


/**
 * @brief Get field wing from pressurewing_wing_data message
 *
 * @return Side of wing (0 for left, 1 for right)
 */
static inline uint8_t mavlink_msg_pressurewing_wing_data_get_wing(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  164);
}

/**
 * @brief Get field pressure_digital from pressurewing_wing_data message
 *
 * @return 14 bit digital pressure
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_get_pressure_digital(const mavlink_message_t* msg, uint16_t *pressure_digital)
{
	return _MAV_RETURN_uint16_t_array(msg, pressure_digital, 20,  124);
}

/**
 * @brief Get field pressure_pascal from pressurewing_wing_data message
 *
 * @return Pressure measured in Pa
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_get_pressure_pascal(const mavlink_message_t* msg, float *pressure_pascal)
{
	return _MAV_RETURN_float_array(msg, pressure_pascal, 20,  0);
}

/**
 * @brief Get field local_lift from pressurewing_wing_data message
 *
 * @return Local lifts from planar pressure approximation
 */
static inline uint16_t mavlink_msg_pressurewing_wing_data_get_local_lift(const mavlink_message_t* msg, float *local_lift)
{
	return _MAV_RETURN_float_array(msg, local_lift, 10,  80);
}

/**
 * @brief Get field estim_lift from pressurewing_wing_data message
 *
 * @return Estimated lift of entire wing, derived from local lifts
 */
static inline float mavlink_msg_pressurewing_wing_data_get_estim_lift(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  120);
}

/**
 * @brief Decode a pressurewing_wing_data message into a struct
 *
 * @param msg The message to decode
 * @param pressurewing_wing_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_pressurewing_wing_data_decode(const mavlink_message_t* msg, mavlink_pressurewing_wing_data_t* pressurewing_wing_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_pressurewing_wing_data_get_pressure_pascal(msg, pressurewing_wing_data->pressure_pascal);
	mavlink_msg_pressurewing_wing_data_get_local_lift(msg, pressurewing_wing_data->local_lift);
	pressurewing_wing_data->estim_lift = mavlink_msg_pressurewing_wing_data_get_estim_lift(msg);
	mavlink_msg_pressurewing_wing_data_get_pressure_digital(msg, pressurewing_wing_data->pressure_digital);
	pressurewing_wing_data->wing = mavlink_msg_pressurewing_wing_data_get_wing(msg);
#else
	memcpy(pressurewing_wing_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PRESSUREWING_WING_DATA_LEN);
#endif
}

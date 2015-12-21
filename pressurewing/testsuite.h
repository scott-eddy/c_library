/** @file
 *	@brief MAVLink comm protocol testsuite generated from pressurewing.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef PRESSUREWING_TESTSUITE_H
#define PRESSUREWING_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_pressurewing(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_pressurewing(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_pressurewing_sys(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pressurewing_sys_t packet_in = {
		{ 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 },{ 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84 }
    };
	mavlink_pressurewing_sys_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.address_left, packet_in.address_left, sizeof(uint8_t)*20);
        	mav_array_memcpy(packet1.address_right, packet_in.address_right, sizeof(uint8_t)*20);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_sys_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pressurewing_sys_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_sys_pack(system_id, component_id, &msg , packet1.address_left , packet1.address_right );
	mavlink_msg_pressurewing_sys_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_sys_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.address_left , packet1.address_right );
	mavlink_msg_pressurewing_sys_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pressurewing_sys_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_sys_send(MAVLINK_COMM_1 , packet1.address_left , packet1.address_right );
	mavlink_msg_pressurewing_sys_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pressurewing_digital(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pressurewing_digital_t packet_in = {
		{ 17235, 17236, 17237, 17238, 17239, 17240, 17241, 17242, 17243, 17244, 17245, 17246, 17247, 17248, 17249, 17250, 17251, 17252, 17253, 17254 },{ 19315, 19316, 19317, 19318, 19319, 19320, 19321, 19322, 19323, 19324, 19325, 19326, 19327, 19328, 19329, 19330, 19331, 19332, 19333, 19334 }
    };
	mavlink_pressurewing_digital_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.digital_pressure_left, packet_in.digital_pressure_left, sizeof(uint16_t)*20);
        	mav_array_memcpy(packet1.digital_pressure_right, packet_in.digital_pressure_right, sizeof(uint16_t)*20);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_digital_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pressurewing_digital_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_digital_pack(system_id, component_id, &msg , packet1.digital_pressure_left , packet1.digital_pressure_right );
	mavlink_msg_pressurewing_digital_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_digital_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.digital_pressure_left , packet1.digital_pressure_right );
	mavlink_msg_pressurewing_digital_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pressurewing_digital_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_digital_send(MAVLINK_COMM_1 , packet1.digital_pressure_left , packet1.digital_pressure_right );
	mavlink_msg_pressurewing_digital_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pressurewing_pascal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pressurewing_pascal_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0 },{ 577.0, 578.0, 579.0, 580.0, 581.0, 582.0, 583.0, 584.0, 585.0, 586.0, 587.0, 588.0, 589.0, 590.0, 591.0, 592.0, 593.0, 594.0, 595.0, 596.0 }
    };
	mavlink_pressurewing_pascal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.pascal_pressure_left, packet_in.pascal_pressure_left, sizeof(float)*20);
        	mav_array_memcpy(packet1.pascal_pressure_right, packet_in.pascal_pressure_right, sizeof(float)*20);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_pascal_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pressurewing_pascal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_pascal_pack(system_id, component_id, &msg , packet1.pascal_pressure_left , packet1.pascal_pressure_right );
	mavlink_msg_pressurewing_pascal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_pascal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pascal_pressure_left , packet1.pascal_pressure_right );
	mavlink_msg_pressurewing_pascal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pressurewing_pascal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_pascal_send(MAVLINK_COMM_1 , packet1.pascal_pressure_left , packet1.pascal_pressure_right );
	mavlink_msg_pressurewing_pascal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pressurewing_lift(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pressurewing_lift_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0 },{ 297.0, 298.0, 299.0, 300.0, 301.0, 302.0, 303.0, 304.0, 305.0, 306.0 },577.0,605.0
    };
	mavlink_pressurewing_lift_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.estim_lift_left = packet_in.estim_lift_left;
        	packet1.estim_lift_right = packet_in.estim_lift_right;
        
        	mav_array_memcpy(packet1.local_lift_left, packet_in.local_lift_left, sizeof(float)*10);
        	mav_array_memcpy(packet1.local_lift_right, packet_in.local_lift_right, sizeof(float)*10);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_lift_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pressurewing_lift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_lift_pack(system_id, component_id, &msg , packet1.local_lift_left , packet1.local_lift_right , packet1.estim_lift_left , packet1.estim_lift_right );
	mavlink_msg_pressurewing_lift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_lift_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.local_lift_left , packet1.local_lift_right , packet1.estim_lift_left , packet1.estim_lift_right );
	mavlink_msg_pressurewing_lift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pressurewing_lift_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_lift_send(MAVLINK_COMM_1 , packet1.local_lift_left , packet1.local_lift_right , packet1.estim_lift_left , packet1.estim_lift_right );
	mavlink_msg_pressurewing_lift_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pressurewing_wing_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pressurewing_wing_data_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0 },{ 577.0, 578.0, 579.0, 580.0, 581.0, 582.0, 583.0, 584.0, 585.0, 586.0 },857.0,{ 23683, 23684, 23685, 23686, 23687, 23688, 23689, 23690, 23691, 23692, 23693, 23694, 23695, 23696, 23697, 23698, 23699, 23700, 23701, 23702 },241
    };
	mavlink_pressurewing_wing_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.estim_lift = packet_in.estim_lift;
        	packet1.wing = packet_in.wing;
        
        	mav_array_memcpy(packet1.pressure_pascal, packet_in.pressure_pascal, sizeof(float)*20);
        	mav_array_memcpy(packet1.local_lift, packet_in.local_lift, sizeof(float)*10);
        	mav_array_memcpy(packet1.pressure_digital, packet_in.pressure_digital, sizeof(uint16_t)*20);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_wing_data_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pressurewing_wing_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_wing_data_pack(system_id, component_id, &msg , packet1.wing , packet1.pressure_digital , packet1.pressure_pascal , packet1.local_lift , packet1.estim_lift );
	mavlink_msg_pressurewing_wing_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_wing_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.wing , packet1.pressure_digital , packet1.pressure_pascal , packet1.local_lift , packet1.estim_lift );
	mavlink_msg_pressurewing_wing_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pressurewing_wing_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pressurewing_wing_data_send(MAVLINK_COMM_1 , packet1.wing , packet1.pressure_digital , packet1.pressure_pascal , packet1.local_lift , packet1.estim_lift );
	mavlink_msg_pressurewing_wing_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pressurewing(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_pressurewing_sys(system_id, component_id, last_msg);
	mavlink_test_pressurewing_digital(system_id, component_id, last_msg);
	mavlink_test_pressurewing_pascal(system_id, component_id, last_msg);
	mavlink_test_pressurewing_lift(system_id, component_id, last_msg);
	mavlink_test_pressurewing_wing_data(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // PRESSUREWING_TESTSUITE_H

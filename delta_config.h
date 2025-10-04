/* First, path to index files. The order has to match the numbers in vankusconf.py. */
const char * files[40] = { 
"/mnt/tables/gsm/380.idx",
"/mnt/tables/gsm/220.idx",
"/mnt/tables/gsm/100.idx",
"/mnt/tables/gsm/108.idx",
"/mnt/tables/gsm/116.idx",
"/mnt/tables/gsm/124.idx",
"/mnt/tables/gsm/132.idx",
"/mnt/tables/gsm/140.idx",
"/mnt/tables/gsm/148.idx",
"/mnt/tables/gsm/156.idx",
"/mnt/tables/gsm/164.idx",
"/mnt/tables/gsm/172.idx",
"/mnt/tables/gsm/180.idx",
"/mnt/tables/gsm/188.idx",
"/mnt/tables/gsm/196.idx",
"/mnt/tables/gsm/204.idx",
"/mnt/tables/gsm/212.idx",
"/mnt/tables/gsm/230.idx",
"/mnt/tables/gsm/238.idx",
"/mnt/tables/gsm/250.idx",
"/mnt/tables/gsm/260.idx",
"/mnt/tables/gsm/268.idx",
"/mnt/tables/gsm/276.idx",
"/mnt/tables/gsm/292.idx",
"/mnt/tables/gsm/324.idx",
"/mnt/tables/gsm/332.idx",
"/mnt/tables/gsm/340.idx",
"/mnt/tables/gsm/348.idx",
"/mnt/tables/gsm/356.idx",
"/mnt/tables/gsm/364.idx",
"/mnt/tables/gsm/372.idx",
"/mnt/tables/gsm/388.idx",
"/mnt/tables/gsm/396.idx",
"/mnt/tables/gsm/404.idx",
"/mnt/tables/gsm/412.idx",
"/mnt/tables/gsm/420.idx",
"/mnt/tables/gsm/428.idx",
"/mnt/tables/gsm/436.idx",
"/mnt/tables/gsm/492.idx",
"/mnt/tables/gsm/500.idx"  };

/* Offsets of beginning of tables specified in 4096B long blocks.
   Of course the order matters.
   E.g. the first number "102347869" tells us that the first table, 380, begins
   102347869*4096 = 419 216 871 424 bytes from the beginning of the device.
*/

const uint64_t offsets[40] = {
307023454,
163775692,
10245229,
20474085,
30708396,
40940332,
51178974,
61449748,
71687164,
81916659,
92149014,
102379448,
112612741,
122841625,
133081437,
143312332,
153542321,
174003451,
184237816,
194467757,
0,
204708018,
214940238,
225169318,
235402061,
245637073,
255869298,
266101620,
276330747,
286562461,
296794147,
317271897,
327506237,
337736487,
347968746,
358202359,
368434377,
378669463,
388903556,
399133415
};

/* Path to devices (or files) where the tables are stored. */
const char * devpaths[] = {
"/dev/sda"};

/* Which table has been stored on which device. E.g. "2" means that the table
   is on second (counting from 0) device from the devpaths array.
*/
const int devs[40] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

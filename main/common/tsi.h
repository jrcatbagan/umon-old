/**************************************************************************
 *
 * Copyright (c) 2013 Alcatel-Lucent
 * 
 * Alcatel Lucent licenses this file to You under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  A copy of the License is contained the
 * file LICENSE at the top level of this repository.
 * You may also obtain a copy of the License at:
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 **************************************************************************
 *
 * tsi.h:
 *
 * Header file for the touch-screen-interface code.
 *
 * Original author:     Ed Sutter (ed.sutter@alcatel-lucent.com)
 *
 */
extern int tsi_init(void);
extern int tsi_active(void);
extern int tsi_getx(void);
extern int tsi_gety(void);

#ifndef PEN_MOVE_FILTER
#define PEN_MOVE_FILTER			15
#endif

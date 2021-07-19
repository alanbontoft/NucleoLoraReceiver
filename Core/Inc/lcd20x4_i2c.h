#ifndef LCD20X4_I2C_H_
#define LCD20X4_I2C_H_

#include "main.h"
#include <stdbool.h>

/* Function prototypes */
/**
 * @brief Initialise LCD20x4
 * @param[in] *pI2cHandle - pointer to HAL I2C handle
 */
bool lcd20x4_i2c_init(I2C_HandleTypeDef *pI2cHandle);

/**
 * @brief Set cursor position
 * @param[in] row - 0 or 1 for line1 or line2
 * @param[in] col - 0 - 15 (16 columns LCD)
 */
void lcd20x4_i2c_setCursor(uint8_t row, uint8_t col);

/**
 * @brief Move to beginning of 1st line
 */
void lcd20x4_i2c_1stLine(void);

/**
 * @brief Move to beginning of 2nd line
 */
void lcd20x4_i2c_2ndLine(void);

/**
 * @brief Move to beginning of 3rd line
 */
void lcd20x4_i2c_3rdLine(void);

/**
 * @brief Move to beginning of 4th line
 */
void lcd20x4_i2c_4thLine(void);

/**
 * @brief Move to beginning of specified line
 */
void lcd20x4_i2c_Line(uint8_t line);

/**
 * @brief Select LCD Number of lines mode
 */
void lcd20x4_i2c_TwoLines(void);
void lcd20x4_i2c_OneLine(void);

/**
 * @brief Cursor ON/OFF
 */
void lcd20x4_i2c_cursorShow(bool state);

/**
 * @brief Display clear
 */
void lcd20x4_i2c_clear(void);

/**
 * @brief Display ON/OFF, to hide all characters, but not clear
 */
void lcd20x4_i2c_display(bool state);

/**
 * @brief Shift content to right
 */
void lcd20x4_i2c_shiftRight(uint8_t offset);

/**
 * @brief Shift content to left
 */
void lcd20x4_i2c_shiftLeft(uint8_t offset);

/**
 * @brief Print to display
 */
void lcd20x4_i2c_printf(const char* str, ...);

#endif /* LCD20X4_I2C_H_ */

 // Set new MOSFETS states
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, HALPrevW); // Set output U to previous HAL state W
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_14, HALPrevU); // Set output V to previous HAL state U
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_15, HALPrevV); // Set output W to previous HAL state V
	
	HALPrevU = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5);
	HALPrevV = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6);
	HALPrevW = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7);	
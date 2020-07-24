# IMPORTING LIBRARIES
import cv2  # importing opencv library
import numpy as np  # importing numpy library as np

# IMAGE READING
img_ori = cv2.imread('rose_flower.jpeg')

# LOWER AND UPPER BOUND OBJECTS
bgrl = np.array([90, 0, 120], np.uint8) # took masking value by masking in previous example and taking the values
bgrh = np.array([215, 255, 255], np.uint8) # storing the masking color values in the array of unsigned integer 8

# COLOR MASKING
mask = cv2.inRange(img_ori, bgrl, bgrh) # masking so as to be more efficient

# KERNEL DEFINING
kernel = np.array(([3, 2, 6], [5, 7, 8], [2, 4, 8]), np.uint8) # random values passed in array of unsigned integer 8

# BLURRING OPERATIONS
# FILTER 2D
filter2d = cv2.filter2D(mask, -1, kernel) # parameters are (image object, destination depth(-1), kernel)
pot = cv2.filter2D(mask, -1, kernel) # parameters are (image object, destination depth(-1), kernel)
# AVERAGING
avg = cv2.blur(mask, (5, 5)) # kernal size 5x5
# GAUSSIAN BLURRING
gaus_blur = cv2.GaussianBlur(mask, (5, 5), 0) # kernal size 5x5
# MEDIAN BLURRING
med_blur = cv2.medianBlur(mask, 5) # used to remove salt and pepper noise and edges are preserved while image is blurred
# BILATERAL BLURRING
bilateral = cv2.bilateralFilter(mask, 5, 111, 111) # edges are preserved

# POT DESIGNING
# LINE
pot = cv2.line(pot, (10, 450), (45, 680), (42, 42, 165), 5) # parameters are ( image object, start point, end point, color scheme, thickness)
pot = cv2.line(pot, (210, 450), (165, 680), (42, 42, 165), 5)
pot = cv2.line(pot, (45, 680), (165, 680), (42, 42, 165), 5)
# ELLIPSE
# parameters are ( image object, center coordinates, (major axis, minor axis), angle of rotation(w.r.t horizontal line), start angle, end angle, color scheme, thickness(if -1 then solid shape))
pot = cv2.ellipse(pot, (110, 450), (103, 30), 0, 0, 360, (42, 42, 165), -1)
# FONT STYLING
font = cv2.FONT_HERSHEY_SCRIPT_SIMPLEX  # font style HERSHEY SCRIPT SIMPLEX
# TEXT PRINTING
# parameters are ( image object, text, coordinates, font style (here font object), font scale, font color, thickness, line type)
cv2.putText(pot, 'ROSE', (200, 600), font, 3, (80, 0, 220), 5, cv2.LINE_AA)

# DISPLAYING OUTPUT
cv2.imshow('Original', img_ori)
cv2.imshow('Masked', mask)
cv2.imshow('Flower with Pot', pot)
cv2.imshow('Filter 2D', filter2d)
cv2.imshow('Averaging', avg)
cv2.imshow('Gaussian', gaus_blur)
cv2.imshow('Median', med_blur)
cv2.imshow('Bilateral', bilateral)

#SAVING IMAGES
cv2.imwrite('Mask.jpeg', mask)
cv2.imwrite('Filter2D.jpeg', filter2d)
cv2.imwrite('Averaging.jpeg', avg)
cv2.imwrite('Gaussian.jpeg', gaus_blur)
cv2.imwrite('Median.jpeg', med_blur)
cv2.imwrite('Bilateral.jpeg', bilateral)
cv2.imwrite("Pot_and_Text.jpeg", pot)

# EXIT CONTROL
cv2.waitKey(0)
cv2.destroyAllWindows()
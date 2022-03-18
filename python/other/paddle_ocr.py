from paddleocr import PaddleOCR


def ocr(img_path):
    """
    输入图片文件路径，输出文本结果
    :param img_path:
    :return:
    """
    ocr = PaddleOCR(use_angle_cls=True, lang="ch")  # 只需要运行一次就能下载模型

    result = ocr.ocr(img_path, cls=True)
    text = ""
    for line in result:
        text += line[1][0]

    # print(text)
    return text


if __name__ == "__main__":
    ocr("./data/test_data/1.jpg")
    ocr("./data/test_data/2.jpg")
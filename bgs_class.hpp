
class BSWrapper {
  public:
    BSWrapper() {
        pMOG2 = cv::createBackgroundSubtractorMOG2();
    }

    ~BSWrapper() {
        delete pMOG2;
    }

    int apply(cv::Mat& src, cv::Mat& result) {
        pMOG2->apply(src, result);
        return 0;
    }

  private:
    cv::Ptr<cv::BackgroundSubtractor> pMOG2;
};


// BSWrapper.hpp
//   background subtractor wrapper because we need to use a consistence
//   cv::BackgroundSubtractor to identify moving object.
//   So we wrap the object in this class

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


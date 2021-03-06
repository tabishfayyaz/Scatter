@import UIKit;

@protocol HYPScatterPlotDataSource;

@class HYPScatterPoint;
@class HYPScatterLabel;

@interface HYPScatterPlot : UIView

@property (nonatomic, weak) id<HYPScatterPlotDataSource> dataSource;

//  optional properties
@property (nonatomic) UIColor *averageLineColor;
@property (nonatomic) UIColor *xAxisColor;
@property (nonatomic) UIColor *yAxisMidGradient;
@property (nonatomic) UIColor *yAxisEndGradient;

@end

@protocol HYPScatterPlotDataSource <NSObject>

@required

/**
 
 @return should be a list of HYPScatterPoint objects
 */
- (NSArray *)pointsForScatterPlot:(HYPScatterPlot *)scatterPlot;
- (HYPScatterPoint *)maximumXValue:(HYPScatterPlot *)scatterPlot;
- (HYPScatterPoint *)minimumXValue:(HYPScatterPlot *)scatterPlot;
- (HYPScatterPoint *)maximumYValue:(HYPScatterPlot *)scatterPlot;
- (HYPScatterPoint *)minimumYValue:(HYPScatterPlot *)scatterPlot;

@optional

- (CGFloat)averageYValue:(HYPScatterPlot *)scatterPlot;
- (HYPScatterLabel *)minimumYLabel:(HYPScatterPlot *)scatterPlot;
- (HYPScatterLabel *)maximumYLabel:(HYPScatterPlot *)scatterPlot;
- (HYPScatterLabel *)minimumXLabel:(HYPScatterPlot *)scatterPlot;
- (HYPScatterLabel *)maximumXLabel:(HYPScatterPlot *)scatterPlot;
- (HYPScatterLabel *)averageLabel:(HYPScatterPlot *)scatterPlot;

@end

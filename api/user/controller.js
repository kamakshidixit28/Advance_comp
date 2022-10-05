const ErrorResponse = require('../../util/errorResponse');
const asyncHandler = require('../../middleware/async');
// uytuygguy
const User = require('./model');

exports.getMe = asyncHandler(async (req, res, next) => {
    const user = await User.findById(req.user.id);
    res.status(200).json({
        success: true,
        data: user,
    });
});
